#!/bin/bash
clear 

#Write a script to print Binary to decimal.

BinToDec(){
    read -p "Enter the Decimal Number : " num
    bin=$(echo "obase=2;$num" | bc )
    echo "Binary of $num is $bin"
}
BinToDec