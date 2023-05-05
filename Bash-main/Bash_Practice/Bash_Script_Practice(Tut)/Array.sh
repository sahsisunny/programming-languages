#!/bin/bash
clear

#Declearing Normal Array
declare -a nArray
nArray=('My' 'name' 'is' 'Sunny')

#Accessing Normal Array
echo ${nArray[3]}

#Update or Change item/value in Normal Array
nArray[1]='desgination'
echo ${nArray[@]}

#Add item/value in Normal Array
nArray[4]='Sahsi'
echo ${nArray[@]}

#Delete or Remove item/value(index) in Normal Array
unset nArray[4]
echo ${nArray[@]}

#Print index number in Normal Array
echo ${!nArray[@]}

#Print length of Normal Array
echo ${#nArray[@]}