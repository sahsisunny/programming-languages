# append() array method

print("append() array method\n")
print("Array before append")
from array import *

stu_roll = array('i', [101, 102, 103, 104, 105])
l = len(stu_roll)
i = 0
while (i < l):
    print(stu_roll[i])
    i += 1

print("Array after append")
stu_roll.append(106)
stu_roll.append(107)
l = len(stu_roll)
i = 0
while (i < l):
    print(stu_roll[i])
    i += 1
