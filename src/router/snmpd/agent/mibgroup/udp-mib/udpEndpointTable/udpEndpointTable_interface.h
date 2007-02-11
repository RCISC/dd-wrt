/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.67 $ of : mfd-interface.m2c,v $
 *
 * $Id: udpEndpointTable_interface.h,v 1.3 2006/01/25 16:26:07 dts12 Exp $
 */
/** @ingroup interface Routines to interface to Net-SNMP
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
#ifndef UDPENDPOINTTABLE_INTERFACE_H
#define UDPENDPOINTTABLE_INTERFACE_H

#ifdef __cplusplus
extern          "C" {
#endif


#include "udpEndpointTable.h"


    /*
     ********************************************************************
     * Table declarations
     */

    /*
     * PUBLIC interface initialization routine 
     */
    void
        _udpEndpointTable_initialize_interface
        (udpEndpointTable_registration * user_ctx, u_long flags);
    void
        _udpEndpointTable_shutdown_interface(udpEndpointTable_registration
                                             * user_ctx);

    udpEndpointTable_registration *udpEndpointTable_registration_get(void);

        udpEndpointTable_registration
        * udpEndpointTable_registration_set(udpEndpointTable_registration *
                                            newreg);

    netsnmp_container *udpEndpointTable_container_get(void);
    int             udpEndpointTable_container_size(void);

        udpEndpointTable_rowreq_ctx
        * udpEndpointTable_allocate_rowreq_ctx(void);
    void
        udpEndpointTable_release_rowreq_ctx(udpEndpointTable_rowreq_ctx *
                                            rowreq_ctx);

    int             udpEndpointTable_index_to_oid(netsnmp_index * oid_idx,
                                                  udpEndpointTable_mib_index
                                                  * mib_idx);
    int             udpEndpointTable_index_from_oid(netsnmp_index *
                                                    oid_idx,
                                                    udpEndpointTable_mib_index
                                                    * mib_idx);

    /*
     * access to certain internals. use with caution!
     */
    void            udpEndpointTable_valid_columns_set(netsnmp_column_info
                                                       *vc);


#ifdef __cplusplus
}
#endif
#endif                          /* UDPENDPOINTTABLE_INTERFACE_H */
/**  @} */

