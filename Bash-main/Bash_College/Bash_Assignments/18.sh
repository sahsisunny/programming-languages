#!/bin/bash
clear

#Write a script to print Decimal to binary and vice versa.

DecToBin(){
    read -p "Enter the Decimal Number : " num
    bin=$(echo "obase=2;$num" | bc )
    echo "Binary of $num is $bin"
}
BinToDec(){
    read -p "Enter the Decimal Number : " num
    bin=$(echo "obase=10; ibase=2;$num" | bc )
    echo "Binary of $num is $bin"
}

echo "1. Decimal to Binary"
echo "2. Binary to Decimal"
echo "3. Exit"

read -p "Enter the number : " op
case $op in
    1)
        DecToBin
        ;;
    2)
        BinToDec
        ;;
    3)
        exit
        ;;
    *)
        echo "Plsease enter the valid number!!"
        ;;
esac