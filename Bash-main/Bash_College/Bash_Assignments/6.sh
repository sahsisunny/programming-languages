#!/bin/bash
clear

#Write a script to input the radius of the circle and evaluate one and parimeter of the circle.

read -p "Enter the radius of circle: " r
perimeter=$(echo "scale=2; 2*3.14*$r" | bc)
echo "Perimeter of Circle is: $perimeter"