#!/bin/bash
clear

str="Hello friends chay pi lo"

#Method 1
echo "${#str}"

#Merhod 2
len=`expr length "$str"`
echo $len

#Method 3
leng=`expr "$str" : '.*'`
echo $leng

#Method 4
lengt=`echo $str | wc -c` #Add extra one character because echo command add newline character
echo $lengt

#Method 5
echo $str | awk '{print length}'