#!/bin/bash
clear
echo "Enter the first number: "
read num1
echo "Enter the second number: "
read num2
echo "Enter the third number: "
read num3

if [ $num1 -gt $num2 ]
then
    if [ $num1 -gt $num3 ]
    then
        echo "$num1 is a greatest number"
    else
        echo "$num3 is a greatest number"
    fi
else
    if [ $num2 -gt $num3 ]
    then
        echo "$num2 is a greatest number"
    else
        echo "$num3 is a greatest number"
    fi
fi
