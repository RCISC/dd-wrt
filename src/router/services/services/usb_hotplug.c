/* 
 * USB hotplug service    Copyright 2007, Broadcom Corporation  All Rights
 * Reserved.    THIS SOFTWARE IS OFFERED "AS IS", AND BROADCOM GRANTS NO
 * WARRANTIES OF ANY  KIND, EXPRESS OR IMPLIED, BY STATUTE, COMMUNICATION OR
 * OTHERWISE. BROADCOM  SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS  FOR A SPECIFIC PURPOSE OR NONINFRINGEMENT
 * CONCERNING THIS SOFTWARE.    $Id$  
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>
#include <sys/stat.h>
#include <typedefs.h>
#include <shutils.h>
#include <bcmnvram.h>

static bool usb_ufd_connected( char *str );
static int usb_process_path( char *path, char *fs );
static int usb_add_ufd( void );

#define DUMPFILE	"/tmp/disktype.dump"

void start_hotplug_usb( void )
{
    char *device, *interface;
    char *action;
    int class, subclass, protocol;
    
    if( !(nvram_match ("usb_automnt", "1") ) )
    return;

    if( !( action = getenv( "ACTION" ) ) || !( device = getenv( "TYPE" ) ) )
	return;
    sscanf( device, "%d/%d/%d", &class, &subclass, &protocol );
    if( class == 0 )
    {
	if( !( interface = getenv( "INTERFACE" ) ) )
	    return;
	sscanf( interface, "%d/%d/%d", &class, &subclass, &protocol );
    }

    /* 
     * If a new USB device is added and it is of storage class 
     */
    if( class == 8 && subclass == 6 && !strcmp( action, "add" ) )
	usb_add_ufd(  );
    return;
}

    /* 
     *   Check if the UFD is still connected because the links created in
     * /dev/discs are not removed when the UFD is  unplugged.  
     */
static bool usb_ufd_connected( char *str )
{
    uint host_no;
    char proc_file[128];
    FILE *fp;
    char line[256];
    /* 
     * Host no. assigned by scsi driver for this UFD 
     */
    host_no = atoi( str );
    sprintf( proc_file, "/proc/scsi/usb-storage-%d/%d", host_no, host_no );
 
	if( ( fp = fopen( proc_file, "r" ) ) )
	{
	while( fgets( line, sizeof( line ), fp ) != NULL )
	{
	if (strstr( line, "Attached: Yes" ) )
	{
	fclose( fp );
	return TRUE;
	}
	}
	}
	fclose( fp );
	//in 2.6 kernels its a little bit different
	sprintf( proc_file, "/proc/scsi/usb-storage/%d",host_no );
	if( ( fp = fopen( proc_file, "r" ) ) )
	    {
	    return TRUE;
	    }
	return FALSE;
    
}

    /* 
     *   Mount the path and look for the WCN configuration file.  If it
     * exists launch wcnparse to process the configuration.  
     */
static int usb_process_path( char *path, char *fs)
{
    int ret = ENOENT;
    struct stat tmp_stat;
    char mount_point[32];
    
    sprintf( mount_point, "/%s", nvram_default_get( "usb_mntpoint", "mnt" ) ); 

    ret = eval( "/bin/mount", "-t", fs, path, mount_point );

    return ret;
}

    /* 
     * Handle hotplugging of UFD 
     */
static int usb_add_ufd(  )
{
    DIR *dir;
    FILE *fp;
    char line[256];
    struct dirent *entry;
    char path[128];
    char *fs = NULL;
    int is_part = 0;

    if( ( dir = opendir( "/dev/discs" ) ) == NULL )
	return EINVAL;

    /* 
     * Scan through entries in the directories 
     */
    while( ( entry = readdir( dir ) ) != NULL )
    {
	if( ( strncmp( entry->d_name, "disc", 4 ) ) )
	    continue;

	/* 
	 * Files created when the UFD is inserted are not  removed when
	 * it is removed. Verify the device  is still inserted.  Strip
	 * the "disc" and pass the rest of the string.  
	 */
	if( usb_ufd_connected( entry->d_name + 4 ) == FALSE )
	    continue;
	sprintf( path, "/dev/discs/%s/disc", entry->d_name );
	sysprintf ("/usr/sbin/disktype %s > %s", path, DUMPFILE);

	/* 
	 * Check if it has file system 
	 */
	if( ( fp = fopen( DUMPFILE, "r" ) ) )
	{
	while( fgets( line, sizeof( line ), fp ) != NULL )
	{
	if (strstr( line, "FAT" ) )
	fs = "vfat";
	else if( strstr( line, "Ext2" ) )
	fs = "ext2";
	else if( strstr( line, "Ext3" ) )
#ifdef HAVE_USB_ADVANCED
	fs = "ext3";
#else
	fs = "ext2";
#endif
	
	if( strstr( line, "Partition" ) )
	is_part = 1;
	}
	fclose( fp );
	}
	 
	if( fs )
	{
	    /* 
	     * If it is partioned, mount first partition else raw disk 
	     */
	    if( is_part )
	    {
		char part[10], *partitions, *next;
		struct stat tmp_stat;

		partitions = "part1 part2 part3 part4";
		foreach( part, partitions, next )
		{
		    sprintf( path, "/dev/discs/%s/%s", entry->d_name, part );
		    if( stat( path, &tmp_stat ) )
			continue;
		    if( usb_process_path( path, fs ) == 0 )
			return 0;
		}
	    }

	    else
	    {
		if( usb_process_path( path, fs ) == 0 )
		    return 0;
	    }
	}
    }
    return 0;
}
