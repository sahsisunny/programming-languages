#!/bin/bash
clear

#Write a script to to input two numbers and calculate its sum.

#Taking input from user
input(){
  read -p "Enter the 1st Number : " num1
  read -p "Enter the 2nd Number : " num2
}
#Mathematical operations
add(){
  echo "Sum of $num1 and $num2 is $(($num1+$num2))"
}
#calling Function
input
add