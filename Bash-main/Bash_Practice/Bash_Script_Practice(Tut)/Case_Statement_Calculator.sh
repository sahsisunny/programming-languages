#!/bin/bash
clear
read -p  "Enter the first number: " num1
read -p  "Enter the second number: " num2
read -p  "Enter the Operations(+,-,x,/,all): " op
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
    all)
        clear
        echo "Sum is $((num1+num2))"
        echo "Subtraction is $((num1-num2))"
        echo "Division is $((num1/num2))"
        echo "Multiplication is $((num1*num2))"

        ;;
        *)
        echo "Please enter the correct value"
        ;;
esac