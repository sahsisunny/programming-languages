#!/bin/bash
clear
#Reverse of while loop
i=20

until [ $i -lt 10 ]
do
  echo $i
  i=$((i-1))
done
