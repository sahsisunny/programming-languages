#!/bin/bash
clear

#Write a script to print the even number from 1 to 10.

echo "Even Number from 1 to 10"
i=1
while [ $i -le 10 ]
do
    if [ `expr $i % 2`  -eq 0 ]
    then
        echo  $i
    fi
    i=`expr $i + 1`
done