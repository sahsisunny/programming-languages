#!/bin/bash
clear

#Write a script to input a number and prints its sum of digits.

read -p "Enter the digits.: " Num
g=$Num

s=0

while [ $Num -gt 0 ]
do
	k=$(( $Num % 10 ))

	Num=$(( $Num / 10 ))

	s=$(( $s + $k ))
done
echo "Sum of digits of $g is : $s"
