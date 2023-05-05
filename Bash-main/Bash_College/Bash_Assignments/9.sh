#!/bin/bash
clear

#Write a script to square of the number from 1 to 10.
i=1
for i in {1..10}
do
    i=$((i * 1))
    m=$((i * i))
    echo "Square of $i is $m"
done