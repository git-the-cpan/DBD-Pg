/*---------------------------------------------------------
 *
 * $Id: dbdimp.h,v 1.2 1997/08/09 16:01:15 mergl Exp $
 *
 * Portions Copyright (c) 1994,1995,1996,1997 Tim Bunce
 * Portions Copyright (c) 1997                Edmund Mergl
 *
 *---------------------------------------------------------
 */


/* Define drh implementor data structure */
struct imp_drh_st {
    dbih_drc_t com;		/* MUST be first element in structure	*/
};

/* Define dbh implementor data structure */
struct imp_dbh_st {
    dbih_dbc_t com;		/* MUST be first element in structure	*/

    PGconn    * conn;		/* connection structure */
};

/* Define sth implementor data structure */
struct imp_sth_st {
    dbih_stc_t com;		/* MUST be first element in structure	*/

    PGresult* result;		/* result structure */
    int cur_tuple;		/* current tuple */

    /* Input Details	*/
    HV        *all_params_hv;	/* all params, keyed by name	*/
    AV        *out_params_av;	/* quick access to inout params	*/
    int        dbd_pad_empty;	/* convert ""->" " when binding	*/

    /* (In/)Out Parameter Details */
    bool  has_inout_params;
};


#define sword  signed int
#define sb2    signed short
#define ub2    unsigned short

typedef struct phs_st phs_t;    /* scalar placeholder   */

struct phs_st {  	/* scalar placeholder EXPERIMENTAL	*/
    sword ftype;        /* external OCI field type		*/

    SV	*sv;		/* the scalar holding the value		*/
    int sv_type;	/* original sv type at time of bind	*/
    bool is_inout;

    IV  maxlen;		/* max possible len (=allocated buffer)	*/

    /* these will become an array */
    sb2 indp;		/* null indicator			*/
    char *progv;
    ub2 arcode;
    ub2 alen;		/* effective length ( <= maxlen )	*/

    int alen_incnull;	/* 0 or 1 if alen should include null	*/
    char name[1];	/* struct is malloc'd bigger as needed	*/
};


/* EOF */
