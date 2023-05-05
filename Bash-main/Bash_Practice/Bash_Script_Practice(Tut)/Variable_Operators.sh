#!/bin/bash
clear

<<COMMENTS
name=$(seq 1 10)  #print sequence 1-10

mkdir folder
cd folder/
mkdir  $name

COMMENTS
echo "Enter 1st Number: "
read a
echo "Enter 2nd Number: "
read b
echo "Sum is "$((a+b))   #Method 1
echo "Sum is "`expr $a + $b` #Method 2

#Input through Command Line Argument
clear
echo `expr $1 + $2`


echo $*   #Print inputed number through CLI
echo $#   #Print the  number of input from inputed through CLI
