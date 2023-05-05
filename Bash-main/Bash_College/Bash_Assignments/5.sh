#!/bin/bash
clear

#Write a script to input two numbers and swap/interchange the numbers. Display the numbers before and after swaping.


read -p "Enter first no.: " num1
read -p "Enter second no.: " num2

echo "~~~~~~Before Swapping~~~~~~"
echo "First No.: $num1 Second No.: $num2"

temp=$num1
num1=$num2
num2=$temp

echo "~~~~~~After Swapping~~~~~~"
echo "First No.: $num1 Second No.: $num2"