#!/bin/bash
clear

#Write a script to print multiplication table of number given by user.

read -p "Enter the Number : " num
i=1

for i in {1..10}
do
    num=$((num * 1))
    m=$((num * i))
    echo "$num * $i = $m"
done