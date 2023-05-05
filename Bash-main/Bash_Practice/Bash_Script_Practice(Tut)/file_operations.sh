#!/bin/bash
clear
#-------Read from file-----

#Method 1
#file_content=`cat colors.txt`
#echo "$file_content"

<<COMMENTS
#Method 2
#Read through CLI argument
#RUN -> bash file_operations.sh colors.txt

file=$1
while read -r line
do
  echo $line
done < $file
COMMENTS

#-------Write in file-----

#Method 1
#echo "Yellow" > color.txt
#cat color.txt

#Input from user in write in the file

read -p "Enter colors name: " color
#echo "$color" > color.txt     #Overwrite the file

#echo "$color" >> color.txt    #Append in the file
#cat color.txt

#echo "$color" | tee color.txt    #Overwrite and print at a time
echo "$color" | tee -a color.txt    #Append and print at a time
cat color.txt