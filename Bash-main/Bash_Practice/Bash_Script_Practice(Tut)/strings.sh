#!/bin/bash
clear

str1='programming'
str2='program'
str4=''

#Equal operator
if [ $str1 = $str2 ]
then
  echo "Strings are equal"
fi

#Not equal operator
if [ $str1 != $str2 ]
then
  echo "Strings are NOT equal"
fi

#Greater than like (A, B, C >>>>)
if [ $str1 \> $str2 ]
then
  echo "$str1 is greater then $str2"
fi

#Less than like (A, B, C <<<<<< )
if [ $str2 \< $str1 ]
then
  echo "$str1 is less then $str2"
fi

#Check string length is greater than 0
if [ -n $str4 ]
then
  echo "$str4 is greater then 0"
fi

#Check string length is empty
if [ -z $str4 ]
then
  echo "String is empty"
fi

#Check is str is not the empty string
if [ $str4 ]
then
  echo "$str4 is not empty string"
fi