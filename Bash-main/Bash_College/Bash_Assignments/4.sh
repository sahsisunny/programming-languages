#!/bin/bash
clear

#Write a script to input student roll, name and marks of five subjectsmarks. Calculate total marks and percentage of the marks.

read -p "Enter Student name: " name
read -p "Enter the Roll no.: " roll

read -p "Enter Python mark: " py
read -p "Enter SSAD mark: " ssad
read -p "Enter OS mark: " os
read -p "Enter Stastistics mark: " state
read -p "Enter UNIX mark: " unix

echo "Name: $name"
echo "Roll no.: $roll"
total=$((py+ssad+os+state+unix))
echo "Total marks is : $total"
percentage="$((total*100/500))"
echo "Percentage : $percentage"