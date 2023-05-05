#!/bin/bash
clear

<<SYNTAX
#Method 1
if[expression]; then  #then is same line because ; is here
  #STatement
fi

#Method 2
if[expression]
then
  #STatement
fi
SYNTAX

#-----------------------------------------------------------------
<<Example_1

#Check the password is right or not

echo "Enter the Password: "
read pass
if [ $pass == "xpro" ]
  then
    echo "Login Successful"
  else
    echo "Incorrect Password"
fi

Example_1
#-----------------------------------------------------------------

<<Example_2

Example_2

#Check the Grade A,B,C..

echo "Enter the Mark(<100): "
read mark
if [ $mark -le 100 ]
  then
    if [ $mark -gt 90 ] && [ $mark -lt 100 ]
    then
      echo "Grade A"
    elif [ $mark -gt 80 ] && [ $mark -lt 90 ]
    then
      echo "Grade B"
      elif [ $mark -gt 70 ] && [ $mark -lt 80 ]
    then
      echo "Grade C"
      elif [ $mark -gt 60 ] && [ $mark -lt 70 ]
    then
      echo "Grade D"
    else
      echo "Fail"
    fi
  else
    echo "Please enter mark less then 100"
fi