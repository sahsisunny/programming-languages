# Slicing  on Arrays

from array import *

stu_roll = array('i', [101, 102, 103, 104, 105, 106, 107])
print("Original Array")
n = len(stu_roll)
for i in range(n):
    print(i, "=", stu_roll[i])

print("****************************")
print("\t\tSlicing Array")
# a= stu_roll[start position : end position : stepsize]
a = stu_roll[0:7:2]
for i in a:
    print(i)
