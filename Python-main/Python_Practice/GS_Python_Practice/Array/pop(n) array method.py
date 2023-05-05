# pop(n) array method

print("pop(n) array method\n")
print("Array before pop")
from array import *

stu_roll = array('i', [101, 102, 103, 104, 105])
l = len(stu_roll)
i = 0
while (i < l):
    print(stu_roll[i])
    i += 1

print("Array after pop")
r = stu_roll.pop(1)
l = len(stu_roll)
i = 0
while (i < l):
    print(stu_roll[i])
    i += 1
print("Removed element: ", r)
