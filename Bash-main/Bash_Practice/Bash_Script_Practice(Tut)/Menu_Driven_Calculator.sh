#!/bin/bash
clear

echo "-----------Calculator-----------"
echo -e "\t1. Addition"
echo -e "\t2. Subtraction"
echo -e "\t3. Multiplication"
echo -e "\t4. Division"
echo -e "\t5. All Above Operation"
read -p  "Enter the Number: " op
echo "~~You Selected  Options $op~~"
read -p  "Enter the first number: " num1
read -p  "Enter the second number: " num2

case $op in
    1)
        echo "Sum is $((num1+num2))"
        ;;
    2)
        echo "Subtraction is $((num1-num2))"
        ;;
    3)
        echo "Multiplication is $((num1*num2))"
        ;;
    4)
        echo "Division is $((num1/num2))"
                ;;
    5)
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