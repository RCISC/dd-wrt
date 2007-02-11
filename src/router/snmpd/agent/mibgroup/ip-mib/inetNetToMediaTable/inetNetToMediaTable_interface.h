/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.67 $ of : mfd-interface.m2c,v $
 *
 * $Id: inetNetToMediaTable_interface.h,v 1.7 2006/01/25 16:25:55 dts12 Exp $
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
#ifndef INETNETTOMEDIATABLE_INTERFACE_H
#define INETNETTOMEDIATABLE_INTERFACE_H

#ifdef __cplusplus
extern          "C" {
#endif


#include "inetNetToMediaTable.h"


    /*
     ********************************************************************
     * Table declarations
     */

    /*
     * PUBLIC interface initialization routine 
     */
    void
        _inetNetToMediaTable_initialize_interface
        (inetNetToMediaTable_registration * user_ctx, u_long flags);
    void
        _inetNetToMediaTable_shutdown_interface
        (inetNetToMediaTable_registration * user_ctx);

        inetNetToMediaTable_registration
        * inetNetToMediaTable_registration_get(void);

        inetNetToMediaTable_registration
        * inetNetToMediaTable_registration_set
        (inetNetToMediaTable_registration * newreg);

    netsnmp_container *inetNetToMediaTable_container_get(void);
    int             inetNetToMediaTable_container_size(void);

    u_int           inetNetToMediaTable_dirty_get(void);
    void            inetNetToMediaTable_dirty_set(u_int status);

        inetNetToMediaTable_rowreq_ctx
        * inetNetToMediaTable_allocate_rowreq_ctx(inetNetToMediaTable_data
                                                  *, void *);
    void
        inetNetToMediaTable_release_rowreq_ctx
        (inetNetToMediaTable_rowreq_ctx * rowreq_ctx);

    int             inetNetToMediaTable_index_to_oid(netsnmp_index *
                                                     oid_idx,
                                                     inetNetToMediaTable_mib_index
                                                     * mib_idx);
    int             inetNetToMediaTable_index_from_oid(netsnmp_index *
                                                       oid_idx,
                                                       inetNetToMediaTable_mib_index
                                                       * mib_idx);

    /*
     * access to certain internals. use with caution!
     */
    void
            inetNetToMediaTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif
#endif                          /* INETNETTOMEDIATABLE_INTERFACE_H */
/**  @} */

