#!/bin/bash
clear

#Write a script to add, substract, multiply, divide and modulas of two numbers.

read -p "Enter first no.: " num1
read -p "Enter second no.: " num2

read -p "Enter the operation(+,-,x,/,%): " op

case $op in
    +)
        echo "Sum is $((num1+num2))"
        ;;
    -)
        echo "Subtraction is $((num1-num2))"
        ;;
    x)
        echo "Multiplication is $((num1*num2))"
        ;;
    /)
        echo "Division is $((num1/num2))"
        ;;
    %)
        echo "Modulus is $((num1%num2))"
        ;;
        *)
        echo "Please enter valid sign!!"
        ;;
esac