#!/bin/bash
clear
count=1
for ((;;))
do
    sleep 2
    echo "Hacking $count% done."
    count=$(( count+1 ))
done