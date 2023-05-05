#!/bin/bash
clear

echo(){
  builtin echo -n `date "+[%Y-%m-%d %H:%M:%S]"` ": "  #Time Stamp
  builtin echo $1
}
echo "Modified echo "