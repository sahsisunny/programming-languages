# remove() array method

print("remove() array method\n")
print("Array before remove")
from array import *

stu_roll = array('i', [101, 102, 103, 104, 105])
l = len(stu_roll)
i = 0
while (i < l):
    print(stu_roll[i])
    i += 1

print("Array after remove")
stu_roll.remove(101)
l = len(stu_roll)
i = 0
while (i < l):
    print(stu_roll[i])
    i += 1
