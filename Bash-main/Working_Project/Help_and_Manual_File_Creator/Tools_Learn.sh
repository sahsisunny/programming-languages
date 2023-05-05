#!/bin/bash
clear
echo "--------------------------------------------"
echo "|    Tools Help and Manual file creator    |"
echo "|                      By:- Sunny Sahsi    |"
echo "--------------------------------------------"
read -p "Enter tool name: " tools

mkdir /home/$(whoami)/Documents/$tools
cd /home/$(whoami)/Documents/$tools

#Help Command
helptxt=_Help
touch "$tools$helptxt"
$tools --help > "$tools$helptxt"
echo "$tools Help file successfull generated"

#Manual Command
mantxt=_Manual
touch "$tools$mantxt"
man $tools > "$tools$mantxt"
echo "$tools Manual file successfull generated"

#Open in GUI Mode or Not
read -p "Do you want to open output in GUI Mode?(Yes/No): " ans 
if [ $ans == "yes" ] || [ $ans == "Yes" ] || [ $ans == "y" ] || [ $ans == "Y" ] || [ $ans == "YES" ]
then
    xdg-open /home/$(whoami)/Documents/$tools
elif [ $ans == "no" ] || [ $ans == "No" ] || [ $ans == "n" ] || [ $ans == "N" ] || [ $ans == "NO" ]
then
    echo "Files are created successfuly in /home/$(whoami)/Documents/$tools directory"
else
    echo "Please enter valid answer!!"
fi