#!/bin/bash
clear

#Color Variable
Yellow='\033[0;33m'

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
    echo -e "$Yellow Exiting........."
    sleep 2
fi