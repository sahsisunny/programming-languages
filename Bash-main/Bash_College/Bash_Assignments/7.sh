#!/bin/bash
clear

#Write a script to input the four item name, quantity and unique price of each item. Calculate the total price of the item.

i=1 
while [ $i -le 4 ]
do
    read -p "Enter Item $i name: " item$i
    read -p "Enter the Quantity: " quantity$i
    read -p "Enter Price: " price$i
    i=$((i+1))
done

echo -e "Item -1 : $item1 \tQuantity : $quantity1  \tPrice : $price1"
echo -e "Item -2 : $item2 \tQuantity : $quantity2  \tPrice : $price2"
echo -e "Item -3 : $item3 \tQuantity : $quantity3  \tPrice : $price3"
echo -e "Item -4 : $item4 \tQuantity : $quantity4  \tPrice : $price4"


total=$((price1+price2+price3+price4))
echo -e "Total price is $total"