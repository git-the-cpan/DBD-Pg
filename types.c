/*

   $Id: types.c,v 1.28 2006/03/19 17:57:01 turnstep Exp $

   Copyright (c) 2003-2006 PostgreSQL Global Development Group
   
   You may distribute under the terms of either the GNU General Public
   License or the Artistic License, as specified in the Perl README file.

*/

/*
	 Please do not edit the C portions of this file directly. 
	 It is automatically generated by the enclosed Perl script.
*/


#include "Pg.h"

static sql_type_info_t pg_types[] = {
	{ABSTIMEOID, "abstime", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{ACLITEMOID, "aclitem", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{ANYARRAYOID, "anyarray", null_quote, null_dequote, {SQL_ARRAY}, DBDPG_TRUE},
	{ANYELEMENTOID, "anyelement", 0, 0, {0}, DBDPG_FALSE},
	{ANYOID, "any", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{BITOID, "bitstring", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{BOOLOID, "bool", quote_bool, dequote_bool, {SQL_BOOLEAN}, DBDPG_TRUE},
	{BOXOID, "box", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{BPCHAROID, "bpchar", quote_string, dequote_char, {SQL_CHAR}, DBDPG_TRUE},
	{BYTEAOID, "bytea", quote_bytea, dequote_bytea, {SQL_VARBINARY}, DBDPG_TRUE},
	{CASHOID, "money", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{CHAROID, "char", quote_string, dequote_char, {0}, DBDPG_TRUE},
	{CIDOID, "cid", null_quote, null_dequote, {SQL_INTEGER}, DBDPG_TRUE},
	{CIDROID, "IP - cidr", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{CIRCLEOID, "circle", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{CSTRINGOID, "cstring", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{DATEOID, "date", null_quote, null_dequote, {SQL_TYPE_DATE}, DBDPG_TRUE},
	{FLOAT4OID, "float4", quote_string, dequote_char, {SQL_NUMERIC}, DBDPG_TRUE},
	{FLOAT8OID, "float8", null_quote, null_dequote, {SQL_REAL}, DBDPG_TRUE},
	{INETOID, "IP address", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{INT2OID, "int2", null_quote, null_dequote, {SQL_SMALLINT}, DBDPG_TRUE},
	{INT2VECTOROID, "int28", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{INT4ARRAYOID, "int4array", quote_string, dequote_string, {0}, DBDPG_FALSE},
	{INT4OID, "int4", null_quote, null_dequote, {SQL_INTEGER}, DBDPG_TRUE},
	{INT8OID, "int8", null_quote, null_dequote, {SQL_DOUBLE}, DBDPG_TRUE},
	{INTERNALOID, "internal", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{INTERVALOID, "timespan", quote_string, dequote_string, {SQL_INTERVAL}, DBDPG_TRUE},
	{LANGUAGE_HANDLEROID, "languagehandle", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{LINEOID, "line", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{LSEGOID, "lseg", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{MACADDROID, "MAC address", quote_string, dequote_string, {0}, DBDPG_TRUE},
	{NAMEOID, "name", null_quote, null_dequote, {SQL_VARCHAR}, DBDPG_TRUE},
	{NUMERICOID, "numeric", null_quote, null_dequote, {SQL_DECIMAL}, DBDPG_TRUE},
	{OIDOID, "oid", null_quote, null_dequote, {SQL_INTEGER}, DBDPG_TRUE},
	{OIDVECTOROID, "oid8", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{OPAQUEOID, "opaque", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{PATHOID, "path", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{PG_ATTRIBUTE_RELTYPE_OID, "pg_attribute_reltype", 0, 0, {0}, DBDPG_FALSE},
	{PG_CLASS_RELTYPE_OID, "pg_class_reltype", 0, 0, {0}, DBDPG_FALSE},
	{PG_PROC_RELTYPE_OID, "pg_proc_reltype", 0, 0, {0}, DBDPG_FALSE},
	{PG_TYPE_RELTYPE_OID, "pg_type_reltype", 0, 0, {0}, DBDPG_FALSE},
	{POINTOID, "point", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{POLYGONOID, "polygon", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{RECORDOID, "record", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{REFCURSOROID, "refcursor", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{REGCLASSOID, "regclass", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{REGOPERATOROID, "registeroperator_args", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{REGOPEROID, "registeredoperator", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{REGPROCEDUREOID, "regprocedureoid", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{REGPROCOID, "regproc", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{REGTYPEARRAYOID, "regtypearray", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{REGTYPEOID, "regtype", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{RELTIMEOID, "reltime", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{TEXTOID, "text", quote_string, dequote_string, {SQL_VARCHAR}, DBDPG_TRUE},
	{TIDOID, "tid", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{TIMEOID, "time", null_quote, null_dequote, {SQL_TYPE_TIME}, DBDPG_TRUE},
	{TIMESTAMPOID, "timestamp", quote_string, dequote_string, {SQL_TYPE_TIMESTAMP}, DBDPG_TRUE},
	{TIMESTAMPTZOID, "datetime", quote_string, dequote_string, {SQL_TYPE_TIMESTAMP_WITH_TIMEZONE}, DBDPG_TRUE},
	{TIMETZOID, "timestamptz", null_quote, null_dequote, {SQL_TYPE_TIME_WITH_TIMEZONE}, DBDPG_TRUE},
	{TINTERVALOID, "tinterval", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{TRIGGEROID, "trigger", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{UNKNOWNOID, "unknown", quote_string, dequote_string, {SQL_UNKNOWN_TYPE}, DBDPG_TRUE},
	{VARBITOID, "vbitstring", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{VARCHAROID, "varchar", quote_string, dequote_string, {SQL_VARCHAR}, DBDPG_TRUE},
	{VOIDOID, "void", null_quote, null_dequote, {0}, DBDPG_TRUE},
	{XIDOID, "xid", null_quote, null_dequote, {0}, DBDPG_TRUE},
};

sql_type_info_t* pg_type_data(sql_type)
	int sql_type;
{
	switch(sql_type) {

		case ABSTIMEOID:               return &pg_types[0];
		case ACLITEMOID:               return &pg_types[1];
		case ANYARRAYOID:              return &pg_types[2];
		case ANYELEMENTOID:            return &pg_types[3];
		case ANYOID:                   return &pg_types[4];
		case BITOID:                   return &pg_types[5];
		case BOOLOID:                  return &pg_types[6];
		case BOXOID:                   return &pg_types[7];
		case BPCHAROID:                return &pg_types[8];
		case BYTEAOID:                 return &pg_types[9];
		case CASHOID:                  return &pg_types[10];
		case CHAROID:                  return &pg_types[11];
		case CIDOID:                   return &pg_types[12];
		case CIDROID:                  return &pg_types[13];
		case CIRCLEOID:                return &pg_types[14];
		case CSTRINGOID:               return &pg_types[15];
		case DATEOID:                  return &pg_types[16];
		case FLOAT4OID:                return &pg_types[17];
		case FLOAT8OID:                return &pg_types[18];
		case INETOID:                  return &pg_types[19];
		case INT2OID:                  return &pg_types[20];
		case INT2VECTOROID:            return &pg_types[21];
		case INT4ARRAYOID:             return &pg_types[22];
		case INT4OID:                  return &pg_types[23];
		case INT8OID:                  return &pg_types[24];
		case INTERNALOID:              return &pg_types[25];
		case INTERVALOID:              return &pg_types[26];
		case LANGUAGE_HANDLEROID:      return &pg_types[27];
		case LINEOID:                  return &pg_types[28];
		case LSEGOID:                  return &pg_types[29];
		case MACADDROID:               return &pg_types[30];
		case NAMEOID:                  return &pg_types[31];
		case NUMERICOID:               return &pg_types[32];
		case OIDOID:                   return &pg_types[33];
		case OIDVECTOROID:             return &pg_types[34];
		case OPAQUEOID:                return &pg_types[35];
		case PATHOID:                  return &pg_types[36];
		case PG_ATTRIBUTE_RELTYPE_OID: return &pg_types[37];
		case PG_CLASS_RELTYPE_OID:     return &pg_types[38];
		case PG_PROC_RELTYPE_OID:      return &pg_types[39];
		case PG_TYPE_RELTYPE_OID:      return &pg_types[40];
		case POINTOID:                 return &pg_types[41];
		case POLYGONOID:               return &pg_types[42];
		case RECORDOID:                return &pg_types[43];
		case REFCURSOROID:             return &pg_types[44];
		case REGCLASSOID:              return &pg_types[45];
		case REGOPERATOROID:           return &pg_types[46];
		case REGOPEROID:               return &pg_types[47];
		case REGPROCEDUREOID:          return &pg_types[48];
		case REGPROCOID:               return &pg_types[49];
		case REGTYPEARRAYOID:          return &pg_types[50];
		case REGTYPEOID:               return &pg_types[51];
		case RELTIMEOID:               return &pg_types[52];
		case TEXTOID:                  return &pg_types[53];
		case TIDOID:                   return &pg_types[54];
		case TIMEOID:                  return &pg_types[55];
		case TIMESTAMPOID:             return &pg_types[56];
		case TIMESTAMPTZOID:           return &pg_types[57];
		case TIMETZOID:                return &pg_types[58];
		case TINTERVALOID:             return &pg_types[59];
		case TRIGGEROID:               return &pg_types[60];
		case UNKNOWNOID:               return &pg_types[61];
		case VARBITOID:                return &pg_types[62];
		case VARCHAROID:               return &pg_types[63];
		case VOIDOID:                  return &pg_types[64];
		case XIDOID:                   return &pg_types[65];
		default:return NULL;
	}
}

static sql_type_info_t sql_types[] = {
	{SQL_BOOLEAN, "SQL_BOOLEAN", quote_bool, dequote_bool, {BOOLOID}, DBDPG_TRUE},
	{SQL_CHAR, "SQL_CHAR", quote_string, dequote_char, {BPCHAROID}, DBDPG_TRUE},
	{SQL_VARBINARY, "SQL_VARBINARY", quote_bytea, dequote_bytea, {BYTEAOID}, DBDPG_TRUE},
	{SQL_TYPE_DATE, "SQL_TYPE_DATE", null_quote, null_dequote, {DATEOID}, DBDPG_TRUE},
	{SQL_NUMERIC, "SQL_NUMERIC", quote_string, dequote_char, {FLOAT4OID}, DBDPG_TRUE},
	{SQL_REAL, "SQL_REAL", null_quote, null_dequote, {FLOAT8OID}, DBDPG_TRUE},
	{SQL_SMALLINT, "SQL_SMALLINT", null_quote, null_dequote, {INT2OID}, DBDPG_TRUE},
	{SQL_INTEGER, "SQL_INTEGER", null_quote, null_dequote, {INT4OID}, DBDPG_TRUE},
	{SQL_DOUBLE, "SQL_DOUBLE", null_quote, null_dequote, {INT8OID}, DBDPG_TRUE},
	{SQL_DECIMAL, "SQL_DECIMAL", null_quote, null_dequote, {NUMERICOID}, DBDPG_TRUE},
	{SQL_TYPE_TIME, "SQL_TYPE_TIME", null_quote, null_dequote, {TIMEOID}, DBDPG_TRUE},
	{SQL_TYPE_TIMESTAMP, "SQL_TYPE_TIMESTAMP", quote_string, dequote_string, {TIMESTAMPOID}, DBDPG_TRUE},
	{SQL_TYPE_TIMESTAMP_WITH_TIMEZONE, "SQL_TYPE_TIMESTAMP_WITH_TIMEZONE", quote_string, dequote_string, {TIMESTAMPTZOID}, DBDPG_TRUE},
	{SQL_VARCHAR, "SQL_VARCHAR", quote_string, dequote_string, {VARCHAROID}, DBDPG_TRUE},
};

sql_type_info_t* sql_type_data(sql_type)
	int sql_type;
{	switch(sql_type) {
		case SQL_BOOLEAN:                      return &sql_types[0];
		case SQL_CHAR:                         return &sql_types[1];
		case SQL_VARBINARY:                    return &sql_types[2];
		case SQL_TYPE_DATE:                    return &sql_types[3];
		case SQL_NUMERIC:                      return &sql_types[4];
		case SQL_REAL:                         return &sql_types[5];
		case SQL_SMALLINT:                     return &sql_types[6];
		case SQL_INTEGER:                      return &sql_types[7];
		case SQL_DOUBLE:                       return &sql_types[8];
		case SQL_DECIMAL:                      return &sql_types[9];
		case SQL_TYPE_TIME:                    return &sql_types[10];
		case SQL_TYPE_TIMESTAMP:               return &sql_types[11];
		case SQL_TYPE_TIMESTAMP_WITH_TIMEZONE: return &sql_types[12];
		case SQL_VARCHAR:                      return &sql_types[13];
		default: return NULL;
	}
}

/*
#!perl

## Autogenerate all type information and populate types.c and types.h

## You should only run this if you are developing DBD::Pg and 
## understand what this script does

## Usage: perl -x $0 "path-to-pgsql-source"

use strict; use warnings; use Data::Dumper;

my $arg = shift || die "Usage: $0 path-to-pgsql-source\n";

-d $arg or die qq{Sorry, but "$arg" is not a directory!\n};

my $file = "$arg/src/include/catalog/pg_type.h";

open(F, $file) or die qq{Could not open file "$file": $!\n};
my %oid;
my $maxlen = 1;
while(<F>) {
	next unless /^#define\s+([A-Z0-9_]*OID)\s+(\d+)/o;
	$oid{$1} = $2;
	length($1) > $maxlen and $maxlen = length($1);
}
close(F);

my $outfile = "types.h";
open(OUT, ">$outfile") or die qq{Could not open "$outfile": $!\n};

print OUT 
qq!#ifndef DBDPGTYEPSH
#define DBDPGTYEPSH

typedef struct sql_type_info {
	int	type_id;
	char	*type_name;
	char* 	(*quote)();
	void	(*dequote)();
	union	{
			int pg;
			int sql;
	} type;
	bool	bind_ok;
} sql_type_info_t;

sql_type_info_t* pg_type_data(int);
sql_type_info_t* sql_type_data(int);

!;

## We sort alphabetically because it is easier to read that way,
## and we don't really care that much about the numbers
for (sort { $a cmp $b } keys %oid) {
	printf OUT "#define %${maxlen}s  $oid{$_}\n", $_;
}


print OUT "\n#endif\n";
close(OUT);

print "Wrote $outfile\n";

$outfile = "types.c.tmp";
open(OUT, ">$outfile") or die qq{Could not open "$outfile": $!\n};

print OUT 
'/' . q{*

   $Id: types.c,v 1.28 2006/03/19 17:57:01 turnstep Exp $

   Copyright (c) 2003-2006 PostgreSQL Global Development Group
   
   You may distribute under the terms of either the GNU General Public
   License or the Artistic License, as specified in the Perl README file.

*} . "/\n\n/" . qq{*
	 Please do not edit the C portions of this file directly. 
	 It is automatically generated by the enclosed Perl script.
*} . qq{/


#include "Pg.h"

};

## Map all types into a sql_type_info structure

#Each must have a "name" e.g. declared as column type name
#whether we quote it or not (DBDPG_TRUE)
#the quoting function to use
#the dequoting function to use
#the closest SQL_ match
#whether this is the "master" for sql matches

# Group by quoting function, then name
# Start with bool

print OUT "static sql_type_info_t pg_types[] = {\n";


my %type;
while (<DATA>) {
	last if /^__END__/;
	next unless /^[A-Z]/o;
	chomp;
	my ($name,@info) = split m#\s*,\s*# => $_;
	$type{$name} = \@info;
}

my %pos;
my $item = 0;
for (sort keys %oid) {
	## Check for any new ones
	if (!exists $type{$_}) {
		warn "Unknown type: $_\n";
		next;
	}
	## {BOOLOID, "bool", quote_bool, dequote_bool, {SQL_BOOLEAN}, DBDPG_TRUE},
	printf OUT qq!\t{$_, "%s", %s, %s, \{%s\}, %s\},\n!,
		$type{$_}[0], $type{$_}[1], $type{$_}[2], $type{$_}[3], ($type{$_}[1] ? "DBDPG_TRUE" : "DBDPG_FALSE");
	$pos{$_} = $item++;
}

print OUT "\};\n\n";

print OUT 
"sql_type_info_t* pg_type_data(sql_type)
\tint sql_type;
{
\tswitch(sql_type) {
\n";


for (sort keys %type) {
	if (!exists $oid{$_}) {
		warn "Unreferenced type: $_\n";
	}
	printf OUT qq{\t\tcase %-*s return \&pg_types\[%d\];\n}, 1+$maxlen, "$_:", $pos{$_};
}

print OUT "\t\tdefault:return NULL;\n\t\}\n\}\n\n";


print OUT "static sql_type_info_t sql_types[] = \{\n";

undef %pos;
$item=0;
$maxlen = 1;
for (sort keys %type) {
	if (!exists $oid{$_}) {
		warn "Unreferenced type: $_\n";
	}
	next unless $type{$_}[4];
	my $sql = $type{$_}[3];
	## {SQL_VARCHAR, "SQL_VARCHAR", quote_string, dequote_string, {VARCHAROID}, DBDPG_TRUE },
	printf OUT qq{\t\{$sql, "$sql", $type{$_}[1], $type{$_}[2], \{$_\}, DBDPG_TRUE\},\n};
	$pos{$sql} = $item++;
	$maxlen = length $sql if length $sql > $maxlen;
}
print OUT "\};\n\n";

print OUT "sql_type_info_t* sql_type_data(sql_type)\n\tint sql_type;\n\{\tswitch(sql_type) \{\n";
for (sort { $pos{$a} <=> $pos{$b} } keys %pos) {
	printf OUT qq{\t\tcase %-*s return \&sql_types\[%d\];\n}, 1+$maxlen, "$_:", $pos{$_};
}
print OUT "\t\tdefault: return NULL;\n\t\}\n\}\n\n/" ."*\n";

seek(DATA,0,0);
1 while <DATA> !~ /!perl/;
print OUT "#!perl\n";
while (<DATA>) { print OUT $_; }
close(OUT);
system("mv $outfile types.c");
print "Wrote types.c\n";

exit;
__DATA__
## Format: for each row, there are 6 items, comma separated:
## 1. The internal name, taken from the PG source code: always ends in "OID"
## 2. The given name, usually as simple as lowercasing and dropping the OID
## 3. The function name we use to do the quoting, or 0 if we do not bind it
## 4. The function name we use for DE-quoting
## 5. The closest SQL_ datatype, or 0 if there is none
## 6. Whether this is the one to use for reverse SQL_ type mapping
## Try to keep them grouped by the quoting function, SQL_ mapper, then the internal name

## Numbers - no quoting needed
INT2OID, int2, null_quote, null_dequote, SQL_SMALLINT, 1
INT4OID, int4, null_quote, null_dequote, SQL_INTEGER, 1
INT8OID, int8, null_quote, null_dequote, SQL_DOUBLE, 1
FLOAT4OID, float4, quote_string, dequote_char, SQL_NUMERIC, 1
FLOAT8OID, float8, null_quote,null_dequote, SQL_REAL, 1
NUMERICOID, numeric, null_quote, null_dequote, SQL_DECIMAL, 1
CIDOID, cid, null_quote, null_dequote, SQL_INTEGER, 0
OIDOID, oid, null_quote, null_dequote, SQL_INTEGER, 0


## Text - single quotes on end, escape backslashes and apostrophes
VARCHAROID, varchar, quote_string, dequote_string, SQL_VARCHAR, 1
BPCHAROID, bpchar, quote_string, dequote_char, SQL_CHAR, 1
NAMEOID, name, null_quote, null_dequote, SQL_VARCHAR, 0
TEXTOID, text, quote_string, dequote_string, SQL_VARCHAR, 0

## Binary - special quoting rules
BYTEAOID, bytea, quote_bytea, dequote_bytea, SQL_VARBINARY, 1
CHAROID, char, quote_string, dequote_char, 0, 0

## Boolean
BOOLOID, bool, quote_bool, dequote_bool, SQL_BOOLEAN, 1

## Time and date
DATEOID, date, null_quote, null_dequote, SQL_TYPE_DATE, 1
TIMEOID, time, null_quote, null_dequote, SQL_TYPE_TIME, 1
TIMESTAMPOID, timestamp, quote_string, dequote_string, SQL_TYPE_TIMESTAMP, 1
TIMESTAMPTZOID, datetime, quote_string, dequote_string, SQL_TYPE_TIMESTAMP_WITH_TIMEZONE, 1
TIMETZOID, timestamptz, null_quote, null_dequote, SQL_TYPE_TIME_WITH_TIMEZONE, 0


## Others
ANYELEMENTOID, anyelement, 0, 0, 0, 0
ABSTIMEOID, abstime, null_quote, null_dequote, 0, 0
ACLITEMOID, aclitem, null_quote, null_dequote, 0, 0
ANYARRAYOID, anyarray, null_quote, null_dequote, SQL_ARRAY, 0
ANYOID, any, null_quote, null_dequote, 0, 0
BITOID, bitstring, null_quote, null_dequote, 0, 0
BOXOID, box, null_quote, null_dequote, 0, 0
CASHOID, money, null_quote, null_dequote, 0, 0
CIDROID, IP - cidr, null_quote, null_dequote, 0, 0
CIRCLEOID, circle, null_quote, null_dequote, 0, 0
CSTRINGOID, cstring, null_quote, null_dequote, 0, 0
INETOID, IP address, null_quote, null_dequote, 0, 0
INT2VECTOROID, int28, null_quote, null_dequote, 0, 0
INT4ARRAYOID, int4array, quote_string, dequote_string, 0, 0
INTERNALOID, internal, null_quote, null_dequote, 0, 0
INTERVALOID, timespan, quote_string, dequote_string, SQL_INTERVAL, 0
LANGUAGE_HANDLEROID, languagehandle, null_quote, null_dequote, 0, 0
LINEOID, line, null_quote, null_dequote, 0, 0
LSEGOID, lseg, null_quote, null_dequote, 0, 0
MACADDROID, MAC address, quote_string,dequote_string, 0, 0
OIDVECTOROID, oid8, null_quote, null_dequote, 0, 0
OPAQUEOID, opaque, null_quote, null_dequote, 0, 0
PATHOID, path, null_quote, null_dequote, 0, 0
PG_ATTRIBUTE_RELTYPE_OID, pg_attribute_reltype, 0, 0, 0, 0
PG_CLASS_RELTYPE_OID, pg_class_reltype, 0, 0, 0, 0
PG_PROC_RELTYPE_OID, pg_proc_reltype, 0, 0, 0, 0
PG_TYPE_RELTYPE_OID, pg_type_reltype, 0, 0, 0, 0
POINTOID, point, null_quote, null_dequote, 0, 0
POLYGONOID, polygon, null_quote, null_dequote, 0, 0
RECORDOID, record, null_quote, null_dequote, 0, 0
REFCURSOROID, refcursor, null_quote, null_dequote, 0, 0
REGCLASSOID, regclass, null_quote, null_dequote, 0, 0
REGOPERATOROID, registeroperator_args , null_quote, null_dequote, 0, 0
REGOPEROID, registeredoperator, null_quote, null_dequote, 0, 0
REGPROCEDUREOID, regprocedureoid, null_quote, null_dequote, 0, 0
REGPROCOID, regproc, null_quote, null_dequote, 0, 0
REGTYPEOID, regtype, null_quote, null_dequote, 0, 0
REGTYPEARRAYOID, regtypearray, null_quote, null_dequote, 0, 0
RELTIMEOID, reltime, null_quote, null_dequote, 0, 0
TIDOID, tid, null_quote, null_dequote, 0, 0
TINTERVALOID, tinterval, null_quote, null_dequote, 0, 0
TRIGGEROID, trigger, null_quote, null_dequote, 0, 0
UNKNOWNOID, unknown, quote_string, dequote_string, SQL_UNKNOWN_TYPE, 0
VARBITOID, vbitstring, null_quote, null_dequote, 0, 0
VOIDOID, void, null_quote, null_dequote, 0, 0
XIDOID, xid, null_quote, null_dequote, 0, 0


__END__


*/


