#!perl -w

# Test savepoint functionality
# Uses ids of 500-550

use Test::More;
use DBI qw(:sql_types);
use strict;
$|=1;

if (defined $ENV{DBI_DSN}) {
	plan tests => 4;
} else {
	plan skip_all => 'Cannot run test unless DBI_DSN is defined. See the README file';
}

my $dbh = DBI->connect($ENV{DBI_DSN}, $ENV{DBI_USER}, $ENV{DBI_PASS},
											 {RaiseError => 0, PrintError => 0, AutoCommit => 0});
ok( defined $dbh, "Connect to database for savepoint testing");

my $pgversion = $dbh->{pg_server_version};
	use Data::Dumper;

SKIP: {
	skip "Cannot test savepoints on pre-8.0 servers", 2 if $pgversion < 80000;

	my $str = 'Savepoint Test';
	my $sth = $dbh->prepare('INSERT INTO dbd_pg_test (id,pname) VALUES (?,?)');

	## Create 500 without a savepoint
	$sth->execute(500,$str);

	## Create 501 inside a savepoint and roll it back
	$dbh->pg_savepoint('dbd_pg_test_savepoint');
	$sth->execute(501,$str);

	$dbh->pg_rollback_to('dbd_pg_test_savepoint');
	$dbh->pg_rollback_to('dbd_pg_test_savepoint'); ## Yes, we call it twice

	## Create 502 after the rollback:
	$sth->execute(502,$str);

	$dbh->commit;

	my $ids = $dbh->selectcol_arrayref('SELECT id FROM dbd_pg_test WHERE pname = ?',undef,$str);
	ok (eq_set($ids, [500, 502]), 'Only row 500 and 502 should be committed');

	## Create 503, then release the savepoint
	$dbh->pg_savepoint('dbd_pg_test_savepoint');
	$sth->execute(503,$str);
	$dbh->pg_release('dbd_pg_test_savepoint');

	## Create 504 outside of any savepoint
	$sth->execute(504,$str);
	$dbh->commit;

	$ids = $dbh->selectcol_arrayref('SELECT id FROM dbd_pg_test WHERE pname = ?',undef,$str);
	ok (eq_set($ids, [500, 502, 503, 504]), "Implicit rollback on deallocate should rollback to last savepoint");
}

$dbh->do("DELETE FROM dbd_pg_test");
$dbh->commit();

ok( $dbh->disconnect(), 'Disconnect from database');

