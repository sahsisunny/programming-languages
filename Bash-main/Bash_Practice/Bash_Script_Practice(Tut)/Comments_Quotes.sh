#!/bin/bash
clear
#-----------------VARIABLE-------------
#Declare Variable <name> and initliaze
echo "Variable Declaration--------"
name="Gupta"

#Enput first name from user
echo "Enter first name: "
read name2

#Print the Full name
echo "$name2 $name"

#---------------COMENTS------------------------
#This is single quote comment.

<<COMMENTS

This is  Multiline Comment.
it is starting and ending with same WORD.

COMMENTS

: '

This is also  Multiline Comment.
it is starting and ending with same WORD.

'

#-----------------QUOTE--------------
#Single Quote
echo "Single Quote-------"
echo 'Sunny $name'



#Double Quote
echo "Double Quote--------"
echo "$name2 $name"


#In line Command
echo "In line Command-----------"
echo "$name2 $(hostname)"

echo "$name2 `hostname`"


# echo $(command 1 <options> $(cmmand 2))

