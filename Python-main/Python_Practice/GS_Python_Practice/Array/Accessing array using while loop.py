# Accessing array using while loop

print("Accessing array using while loop\n")

from array import *

stu_roll = array('i', [101, 102, 103, 104, 105])
l = len(stu_roll)
i = 0
while (i < l):
    print(stu_roll[i])
    i += 1
