#!/bin/bash
clear

read -p "Enter the Radius:" read
pi=3.14
echo $read 3.14 2| awk '{print $1 * $2 * $3}'
