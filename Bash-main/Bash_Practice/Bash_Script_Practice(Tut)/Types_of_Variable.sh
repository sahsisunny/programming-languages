#!/bin/bash
clear

#Types of Variable
# 1. Local Variavle -> define through 'local' keyword
# 2. Global Variable
#Example:
v1="Outside the function Global Variable"  #Global Variable
v2="Global access in function"
check(){
  local v1="Inside the function Local Variable"  #Local Variable
  v3="Global declare in function"
  echo $v1
  echo $v2
}
check
echo $v1
echo $v3

