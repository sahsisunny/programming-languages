# Getting input from user in array using for loop

print("Getting input from user in array using for loop\n")
from array import *

stu_roll = array('i', [])
n = int(input("How many element ?? : "))
for i in range(n):
    stu_roll.append(int(input("ENter element: ")))
for i in range(len(stu_roll)):
    print(stu_roll[i])
