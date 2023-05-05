#!/bin/bash
clear
#Associative Arrray , there indexes are not in arranged.

#Declearing Associative Array
declare -A nArray
nArray=(
        [first]='My'
        [second]='name'
        [third]='is'
        [four]='Sunny'
        )

#Accessing Associative Array
echo ${nArray[four]}

#Update or Change item/value in Associative Array
nArray[second]='desgination'
echo ${nArray[@]}

#Add item/value in Associative Array
nArray[five]='Sahsi'
echo ${nArray[@]}

#Delete or Remove item/value(index) in Associative Array
unset nArray[five]
echo ${nArray[@]}

#Print index number in Associative Array
echo ${!nArray[@]}

#Print length of Associative Array
echo ${#nArray[@]}