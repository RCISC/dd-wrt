/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.67 $ of : mfd-interface.m2c,v $
 *
 * $Id: ifTable_interface.h,v 1.12 2006/01/25 16:25:54 dts12 Exp $
 */
/** @ingroup misc  
 * @defgroup interface Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef IFTABLE_INTERFACE_H
#define IFTABLE_INTERFACE_H

#ifdef __cplusplus
extern          "C" {
#endif


#include "ifTable.h"


    /*
     ********************************************************************
     * Table declarations
     */

    /*
     * PUBLIC interface initialization routine 
     */
    void            _ifTable_initialize_interface(ifTable_registration *
                                                  user_ctx, u_long flags);
    void            _ifTable_shutdown_interface(ifTable_registration *
                                                user_ctx);

    ifTable_registration *ifTable_registration_get(void);

    ifTable_registration *ifTable_registration_set(ifTable_registration *
                                                   newreg);

    netsnmp_container *ifTable_container_get(void);
    int             ifTable_container_size(void);

    u_int           ifTable_dirty_get(void);
    void            ifTable_dirty_set(u_int status);

    ifTable_rowreq_ctx *ifTable_allocate_rowreq_ctx(void *);
    void            ifTable_release_rowreq_ctx(ifTable_rowreq_ctx *
                                               rowreq_ctx);

    int             ifTable_index_to_oid(netsnmp_index * oid_idx,
                                         ifTable_mib_index * mib_idx);
    int             ifTable_index_from_oid(netsnmp_index * oid_idx,
                                           ifTable_mib_index * mib_idx);

    /*
     * access to certain internals. use with caution!
     */
    void            ifTable_valid_columns_set(netsnmp_column_info *vc);

    /*
     * special container init for shared ifTable/ifXTable container
     */
    void            if_mib_container_init(void);

    /*
     */
    void            ifTable_lastChange_set(u_long uptime);


#ifdef __cplusplus
}
#endif
#endif                          /* IFTABLE_INTERFACE_H */
/**  @} */

