#!/bin/bash
clear

read -p "Enter the 1st Number : " num1
read -p "Enter the 1st Number : " num2
read -p "Enter the 1st Number : " num3

if [ $num1 -gt $num2 ] 
then
    if [ $num1 -gt $num3 ]
    then
        echo "$num1 is Greatest Number"
    elif [ $num3 -gt $num2 ]
    then
        echo "$num3 is Greatest Number"
    fi
else
    echo "$num2 is Greatest Number"
fi