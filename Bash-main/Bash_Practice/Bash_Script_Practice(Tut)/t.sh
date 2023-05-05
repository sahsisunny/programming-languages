#!/bin/bash
clear

a=25
b=5.36
echo $a $b | awk '{print "a+b="$1+$2}'