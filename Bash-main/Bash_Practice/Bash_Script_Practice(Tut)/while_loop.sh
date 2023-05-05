#!/bin/bash
clear

i=0
<<COMMENTS
while [ $i -lt 10 ] && [ $i -lt 5 ]
do
  echo $i
  i=$((i+1))
done
COMMENTS

#With Semocolon(;) fo one line
#while [ $i -lt 10 ] && [ $i -lt 5 ] ; do  echo $i ; i=$((i+1)) ; done

#Infinite loop
#while : ; do  sleep 2 ; echo $i ; i=$((i+1)) ; done

#C style loop
while ((i<=10)) ; do  echo $i ; i=$((i+1)) ; done