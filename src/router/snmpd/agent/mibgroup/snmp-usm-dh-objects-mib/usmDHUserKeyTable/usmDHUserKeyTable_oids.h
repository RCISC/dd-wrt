/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-oids.m2c,v 1.14 2005/09/27 15:56:08 rstory Exp $
 *
 * $Id: usmDHUserKeyTable_oids.h,v 1.5 2005/12/01 21:31:52 rstory Exp $
 */
#ifndef USMDHUSERKEYTABLE_OIDS_H
#define USMDHUSERKEYTABLE_OIDS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table usmDHUserKeyTable 
     */
#define USMDHUSERKEYTABLE_OID              1,3,6,1,3,101,1,1,2

#define COLUMN_USMDHUSERAUTHKEYCHANGE         1
#define COLUMN_USMDHUSERAUTHKEYCHANGE_FLAG    (0x1 << 0)

#define COLUMN_USMDHUSEROWNAUTHKEYCHANGE         2
#define COLUMN_USMDHUSEROWNAUTHKEYCHANGE_FLAG    (0x1 << 1)

#define COLUMN_USMDHUSERPRIVKEYCHANGE         3
#define COLUMN_USMDHUSERPRIVKEYCHANGE_FLAG    (0x1 << 2)

#define COLUMN_USMDHUSEROWNPRIVKEYCHANGE         4
#define COLUMN_USMDHUSEROWNPRIVKEYCHANGE_FLAG    (0x1 << 3)


#define USMDHUSERKEYTABLE_MIN_COL   COLUMN_USMDHUSERAUTHKEYCHANGE
#define USMDHUSERKEYTABLE_MAX_COL   COLUMN_USMDHUSEROWNPRIVKEYCHANGE


    /*
     * TODO:405:r: Review USMDHUSERKEYTABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define USMDHUSERKEYTABLE_SETTABLE_COLS (COLUMN_USMDHUSERAUTHKEYCHANGE_FLAG | COLUMN_USMDHUSEROWNAUTHKEYCHANGE_FLAG | COLUMN_USMDHUSERPRIVKEYCHANGE_FLAG | COLUMN_USMDHUSEROWNPRIVKEYCHANGE_FLAG)

#ifdef __cplusplus
}
#endif
#endif                          /* USMDHUSERKEYTABLE_OIDS_H */
