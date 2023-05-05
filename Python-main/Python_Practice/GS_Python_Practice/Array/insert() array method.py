# insert() array method

print("insert() array method\n")
print("Array before insert")
from array import *

stu_roll = array('i', [101, 102, 103, 104, 105])
l = len(stu_roll)
i = 0
while (i < l):
    print(stu_roll[i])
    i += 1

print("Array after insert")
stu_roll.insert(1, 106)
stu_roll.insert(3, 107)
l = len(stu_roll)
i = 0
while (i < l):
    print(stu_roll[i])
    i += 1
