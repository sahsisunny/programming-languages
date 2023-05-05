#!/bin/bash
clear

#Write a script to add, substract, multiply, divide and modulas of two numbers.

#Menu Options
menu(){
  echo -e "1. Addition"
  echo -e "2. Subtraction"
  echo -e "3. Multiplication"
  echo -e "4. Division"
  echo -e "5. Modulus"
  echo -e "6. All Operations"
  echo -e "7. Exit"
  
  read -p "Emter the Operation number : " op
}
choice(){
  case $op in
    1)
      add
      ;;
    2)
      subtraction
      ;;
    3)
      multiplication
      ;;
    4)
      division
      ;;
    5)
      modulus
      ;;
    6)
      add
      substract
      division
      multiplication
      modulus
      ;;
    7)
      exit
      ;;
    *)
      echo "please enter the valid number!!"
      ;;
    esac
}
#Taking input from user
input(){
  read -p "Enter the 1st Number : " num1
  read -p "Enter the 2nd Number : " num2
}
#Mathematical operations
add(){
  echo "Sum of $num1 and $num2 is $(($num1+$num2))"
}
substract(){
  echo "Subtraction of $num1 and $num2 is $(($num1-$num2))"
}
multiplication(){
  echo "Multiplication of $num1 and $num2 is $(($num1*$num2))"
}
division(){
  echo "Division of $num1 and $num2 is $(($num1/$num2))"
}
modulus(){
  echo "Modulus of $num1 and $num2 is $(($num1%$num2))"
}

#Calling functions
menu    #Calling Menu options Function
input   #Taking number input from user
choice  #Taking user choice