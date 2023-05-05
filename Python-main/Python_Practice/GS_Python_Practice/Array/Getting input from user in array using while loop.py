# Getting input from user in array using while loop

print("\nGetting input from user in array using while loop\n")
from array import *

stu_roll = array('i', [])
n = int(input("How many element ?? : "))
i, j = 0, 0
while i < n:
    stu_roll.append(int(input("ENter element: ")))
    i += 1
while (j < len(stu_roll)):
    print(stu_roll[j])
    j += 1
