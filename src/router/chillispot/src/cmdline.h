/* cmdline.h */

/* File autogenerated by gengetopt version 2.14  */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
#define CMDLINE_PARSER_PACKAGE PACKAGE
#endif

#ifndef CMDLINE_PARSER_VERSION
#define CMDLINE_PARSER_VERSION VERSION
#endif

struct gengetopt_args_info
{
  int fg_flag;	/* Run in foreground (default=off).  */
  int debug_flag;	/* Run in debug mode (default=off).  */
  int debugfacility_arg;	/* Which modules to print debug messages for (default='1').  */
  char * debugfacility_orig;	/* Which modules to print debug messages for original value given at command line.  */
  char * conf_arg;	/* Read configuration file (default='/etc/chilli.conf').  */
  char * conf_orig;	/* Read configuration file original value given at command line.  */
  int interval_arg;	/* Re-read configuration file at this interval (default='3600').  */
  char * interval_orig;	/* Re-read configuration file at this interval original value given at command line.  */
  char * pidfile_arg;	/* Filename of process id file (default='/var/run/chilli.pid').  */
  char * pidfile_orig;	/* Filename of process id file original value given at command line.  */
  char * statedir_arg;	/* Directory of nonvolatile data (default='/var/lib/chilli/').  */
  char * statedir_orig;	/* Directory of nonvolatile data original value given at command line.  */
  char * net_arg;	/* Network (default='192.168.182.0/24').  */
  char * net_orig;	/* Network original value given at command line.  */
  char * dynip_arg;	/* Dynamic IP address pool.  */
  char * dynip_orig;	/* Dynamic IP address pool original value given at command line.  */
  char * statip_arg;	/* Static IP address pool.  */
  char * statip_orig;	/* Static IP address pool original value given at command line.  */
  char * dns1_arg;	/* Primary DNS server IP address.  */
  char * dns1_orig;	/* Primary DNS server IP address original value given at command line.  */
  char * dns2_arg;	/* Secondary DNS server IP address.  */
  char * dns2_orig;	/* Secondary DNS server IP address original value given at command line.  */
  char * domain_arg;	/* Domain to use for DNS lookups (default='key.chillispot.org').  */
  char * domain_orig;	/* Domain to use for DNS lookups original value given at command line.  */
  char * ipup_arg;	/* Script to run after link-up.  */
  char * ipup_orig;	/* Script to run after link-up original value given at command line.  */
  char * ipdown_arg;	/* Script to run after link-down.  */
  char * ipdown_orig;	/* Script to run after link-down original value given at command line.  */
  char * conup_arg;	/* Script to run after user logon.  */
  char * conup_orig;	/* Script to run after user logon original value given at command line.  */
  char * condown_arg;	/* Script to run after user logoff.  */
  char * condown_orig;	/* Script to run after user logoff original value given at command line.  */
  char * radiuslisten_arg;	/* IP address to send from.  */
  char * radiuslisten_orig;	/* IP address to send from original value given at command line.  */
  char * radiusserver1_arg;	/* IP address of radius server 1 (default='rad01.hotradius.com').  */
  char * radiusserver1_orig;	/* IP address of radius server 1 original value given at command line.  */
  char * radiusserver2_arg;	/* IP address of radius server 2 (default='rad02.hotradius.com').  */
  char * radiusserver2_orig;	/* IP address of radius server 2 original value given at command line.  */
  int radiusauthport_arg;	/* Authentication UDP port of radius server (default='1812').  */
  char * radiusauthport_orig;	/* Authentication UDP port of radius server original value given at command line.  */
  int radiusacctport_arg;	/* Accounting UDP port of radius server (default='1813').  */
  char * radiusacctport_orig;	/* Accounting UDP port of radius server original value given at command line.  */
  char * radiussecret_arg;	/* Radius shared secret.  */
  char * radiussecret_orig;	/* Radius shared secret original value given at command line.  */
  char * radiusnasid_arg;	/* Radius NAS-Identifier (default='nas01').  */
  char * radiusnasid_orig;	/* Radius NAS-Identifier original value given at command line.  */
  char * radiuslocationid_arg;	/* WISPr Location ID.  */
  char * radiuslocationid_orig;	/* WISPr Location ID original value given at command line.  */
  char * radiuslocationname_arg;	/* WISPr Location Name.  */
  char * radiuslocationname_orig;	/* WISPr Location Name original value given at command line.  */
  int radiusnasporttype_arg;	/* Radius NAS-Port-Type (default='19').  */
  char * radiusnasporttype_orig;	/* Radius NAS-Port-Type original value given at command line.  */
  int coaport_arg;	/* Radius disconnect port to listen to (default='0').  */
  char * coaport_orig;	/* Radius disconnect port to listen to original value given at command line.  */
  int coanoipcheck_flag;	/* Allow radius disconnect from any IP (default=off).  */
  char * proxylisten_arg;	/* IP address to listen to.  */
  char * proxylisten_orig;	/* IP address to listen to original value given at command line.  */
  int proxyport_arg;	/* UDP port to listen to (default='0').  */
  char * proxyport_orig;	/* UDP port to listen to original value given at command line.  */
  char * proxyclient_arg;	/* IP address of proxy client(s).  */
  char * proxyclient_orig;	/* IP address of proxy client(s) original value given at command line.  */
  char * proxysecret_arg;	/* Radius proxy shared secret.  */
  char * proxysecret_orig;	/* Radius proxy shared secret original value given at command line.  */
  char * dhcpif_arg;	/* Local Ethernet interface.  */
  char * dhcpif_orig;	/* Local Ethernet interface original value given at command line.  */
  char * dhcpmac_arg;	/* Interface MAC address.  */
  char * dhcpmac_orig;	/* Interface MAC address original value given at command line.  */
  int lease_arg;	/* Lease time to allocate to clients (default='600').  */
  char * lease_orig;	/* Lease time to allocate to clients original value given at command line.  */
  int eapolenable_flag;	/* Enable IEEE 802.1x authentication (default=off).  */
  char * uamserver_arg;	/* URL of authentication web server (default='https://login.hotradius.com').  */
  char * uamserver_orig;	/* URL of authentication web server original value given at command line.  */
  char * uamhomepage_arg;	/* URL of homepage to redirect unauthenticated users to.  */
  char * uamhomepage_orig;	/* URL of homepage to redirect unauthenticated users to original value given at command line.  */
  char * uamsecret_arg;	/* Shared secret between uamserver and chilli.  */
  char * uamsecret_orig;	/* Shared secret between uamserver and chilli original value given at command line.  */
  char * uamlisten_arg;	/* IP address to listen to for authentication requests.  */
  char * uamlisten_orig;	/* IP address to listen to for authentication requests original value given at command line.  */
  int uamport_arg;	/* TCP port to bind to for authentication requests (default='3990').  */
  char * uamport_orig;	/* TCP port to bind to for authentication requests original value given at command line.  */
  char ** uamallowed_arg;	/* Domain names exempt from access check .  */
  char ** uamallowed_orig;	/* Domain names exempt from access check  original value given at command line.  */
  int uamanydns_flag;	/* Allow client to use any DNS server (default=off).  */
  int macauth_flag;	/* Authenticate based on MAC address (default=off).  */
  char ** macallowed_arg;	/* List of allowed MAC addresses.  */
  char ** macallowed_orig;	/* List of allowed MAC addresses original value given at command line.  */
  char * macsuffix_arg;	/* Suffix to add to the MAC address.  */
  char * macsuffix_orig;	/* Suffix to add to the MAC address original value given at command line.  */
  char * macpasswd_arg;	/* Password used when performing MAC authentication (default='password').  */
  char * macpasswd_orig;	/* Password used when performing MAC authentication original value given at command line.  */
  
  int help_given ;	/* Whether help was given.  */
  int version_given ;	/* Whether version was given.  */
  int fg_given ;	/* Whether fg was given.  */
  int debug_given ;	/* Whether debug was given.  */
  int debugfacility_given ;	/* Whether debugfacility was given.  */
  int conf_given ;	/* Whether conf was given.  */
  int interval_given ;	/* Whether interval was given.  */
  int pidfile_given ;	/* Whether pidfile was given.  */
  int statedir_given ;	/* Whether statedir was given.  */
  int net_given ;	/* Whether net was given.  */
  int dynip_given ;	/* Whether dynip was given.  */
  int statip_given ;	/* Whether statip was given.  */
  int dns1_given ;	/* Whether dns1 was given.  */
  int dns2_given ;	/* Whether dns2 was given.  */
  int domain_given ;	/* Whether domain was given.  */
  int ipup_given ;	/* Whether ipup was given.  */
  int ipdown_given ;	/* Whether ipdown was given.  */
  int conup_given ;	/* Whether conup was given.  */
  int condown_given ;	/* Whether condown was given.  */
  int radiuslisten_given ;	/* Whether radiuslisten was given.  */
  int radiusserver1_given ;	/* Whether radiusserver1 was given.  */
  int radiusserver2_given ;	/* Whether radiusserver2 was given.  */
  int radiusauthport_given ;	/* Whether radiusauthport was given.  */
  int radiusacctport_given ;	/* Whether radiusacctport was given.  */
  int radiussecret_given ;	/* Whether radiussecret was given.  */
  int radiusnasid_given ;	/* Whether radiusnasid was given.  */
  int radiuslocationid_given ;	/* Whether radiuslocationid was given.  */
  int radiuslocationname_given ;	/* Whether radiuslocationname was given.  */
  int radiusnasporttype_given ;	/* Whether radiusnasporttype was given.  */
  int coaport_given ;	/* Whether coaport was given.  */
  int coanoipcheck_given ;	/* Whether coanoipcheck was given.  */
  int proxylisten_given ;	/* Whether proxylisten was given.  */
  int proxyport_given ;	/* Whether proxyport was given.  */
  int proxyclient_given ;	/* Whether proxyclient was given.  */
  int proxysecret_given ;	/* Whether proxysecret was given.  */
  int dhcpif_given ;	/* Whether dhcpif was given.  */
  int dhcpmac_given ;	/* Whether dhcpmac was given.  */
  int lease_given ;	/* Whether lease was given.  */
  int eapolenable_given ;	/* Whether eapolenable was given.  */
  int uamserver_given ;	/* Whether uamserver was given.  */
  int uamhomepage_given ;	/* Whether uamhomepage was given.  */
  int uamsecret_given ;	/* Whether uamsecret was given.  */
  int uamlisten_given ;	/* Whether uamlisten was given.  */
  int uamport_given ;	/* Whether uamport was given.  */
  unsigned int uamallowed_given ;	/* Whether uamallowed was given.  */
  int uamanydns_given ;	/* Whether uamanydns was given.  */
  int macauth_given ;	/* Whether macauth was given.  */
  unsigned int macallowed_given ;	/* Whether macallowed was given.  */
  int macsuffix_given ;	/* Whether macsuffix was given.  */
  int macpasswd_given ;	/* Whether macpasswd was given.  */

} ;

int cmdline_parser (int argc, char * const *argv, struct gengetopt_args_info *args_info);
int cmdline_parser2 (int argc, char * const *argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required);
int cmdline_parser_file_save(const char *filename, struct gengetopt_args_info *args_info);

void cmdline_parser_print_help(void);
void cmdline_parser_print_version(void);

void cmdline_parser_init (struct gengetopt_args_info *args_info);
void cmdline_parser_free (struct gengetopt_args_info *args_info);

int cmdline_parser_configfile (char * const filename, struct gengetopt_args_info *args_info, int override, int initialize, int check_required);

int cmdline_parser_required (struct gengetopt_args_info *args_info, const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */
