#!/bin/bash
clear

#Write a script to input two numbers and swap them.

read -p "Enter the 1st Number : " num1
read -p "Enter the 2nd Number : " num2
echo "Before Swaping 1st Number : $num1 and 2nd Number : $num2"
temp=$num1
num1=$num2
num2=$temp
echo " After Swaping 1st Number : $num1 and 2nd Number : $num2"
