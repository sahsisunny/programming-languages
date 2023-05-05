#!/bin/bash
clear

hello(){
  echo "Hello"
}
hello

#With arguments
hello(){
  echo "Hello $1 $2"
}
hello "SHiELD" "xPRO"

#number of inputs and what
hello(){
  echo "Hello $1 $2"
  echo $#
  echo $@
}
hello "SHiELD" "xPRO"