BEGIN {print "Sno. \tName\tSubject\tMarks"}
{if ($4 > 95) print $0}
END {print "==========Program Complete======="}