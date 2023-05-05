# reverse() array method

print("reverse() array method\n")
print("Array before reverse")
from array import *

stu_roll = array('i', [101, 102, 103, 104, 105])
l = len(stu_roll)
i = 0
while (i < l):
    print(stu_roll[i])
    i += 1

print("Array after reverse")
stu_roll.reverse()
l = len(stu_roll)
i = 0
while (i < l):
    print(stu_roll[i])
    i += 1
