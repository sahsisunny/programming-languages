# Create Array

# Type: 1
print("Type: 1")
import array

stu_roll = array.array('i', [101, 102, 103, 104, 105])

print(stu_roll[0])
print(stu_roll[1])
print(stu_roll[2])
print(stu_roll[3])
print(stu_roll[4])

print("Change module name or give nick name")
import array as ar

stu_roll = ar.array('i', [101, 102, 103, 104, 105])

print(stu_roll[0])
print(stu_roll[1])
print(stu_roll[2])
print(stu_roll[3])
print(stu_roll[4])

# Type: 2

print("Type: 2 most used")
from array import *

stu_roll = array('i', [101, 102, 103, 104, 105])

print(stu_roll[0])
print(stu_roll[1])
print(stu_roll[2])
print(stu_roll[3])
print(stu_roll[4])

print("Type code in float replace 'i' to 'f'")
stu_roll = array('f', [101, 102.34, 103.2, 104.0, 105.532])

print(stu_roll[0])
print(stu_roll[1])
print(stu_roll[2])
print(stu_roll[3])
print(stu_roll[4])
