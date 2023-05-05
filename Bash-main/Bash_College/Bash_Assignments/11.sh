#!/bin/bash
clear

#Write a script to input any number and print its factorial.

read -p "Enter the number : " num
N=$num
fact=1

while [ $num -gt 1 ]
do
  fact=$((fact * num))  #fact = fact * num
  num=$((num - 1))      #num = num - 1
done

echo "Factorial of $N is $fact"