BEGIN {for (i=0; i<=10; i++) print i}
{if ($4 > 95) print $0}
END {print "==========Program Complete======="}