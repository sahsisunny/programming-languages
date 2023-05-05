#!/bin/bash
clear

echo "~~~~~~All .sh File ~~~~~~~"
ls -l *.sh

read -p "Enter the File Name : " file
cat $file
echo ""

read -p  "Do you want to run  Script ?? : " ans
if [ $ans == "yes" ]
  then
    chmod +7 $file
    ./$file
  else
    echo "Exiting........."
    sleep 2
fi