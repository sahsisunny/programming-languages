#!/bin/bash
clear

#Write a script to input a number and prints its reverse order.

read -p "Enter the number: " n
echo "Before Reverse number is : $n"
sd=0
rev=0
while [ $n -gt 0 ]
do
    sd=$(( $n % 10 ))
    rev=$(( $rev * 10 + $sd ))
    n=$(( $n / 10 ))
done
echo "After  Reverse number is : $rev"