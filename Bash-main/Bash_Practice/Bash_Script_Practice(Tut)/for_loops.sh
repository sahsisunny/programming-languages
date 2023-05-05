#!/bin/bash
clear
<<COMMENTS
for i in {1..99..2}
do
    echo $i
done
COMMENTS

for ((i=1;i<=10;i++))
do  if [ $i -eq 5 ]
then
    break  
fi
    echo $i
done