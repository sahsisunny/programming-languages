# extend() array method

print("extend() array method\n")
print("Array before extend")
from array import *

stu_roll = array('i', [101, 102, 103, 104, 105])
arr = array('i', [107, 108, 109])
l = len(stu_roll)
i = 0
while (i < l):
    print(stu_roll[i])
    i += 1

print("Array after extend")
stu_roll.extend(arr)
l = len(stu_roll)
i = 0
while (i < l):
    print(stu_roll[i])
    i += 1
