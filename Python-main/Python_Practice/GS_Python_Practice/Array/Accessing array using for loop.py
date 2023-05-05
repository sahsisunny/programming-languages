# Accessing array using for loop

print("Accessing array using for loop\n")
print("Without Index")
from array import *

stu_roll = array('i', [101, 102, 103, 104, 105])
for element in stu_roll:
    print(element)

print("With Index")
from array import *

stu_roll = array('i', [101, 102, 103, 104, 105])
l = len(stu_roll)
for i in range(l):
    print("Index no.", i, "=", stu_roll[i])

print("\n\n\n\tExperiment:- len() function without any variable")
from array import *

stu_roll = array('i', [101, 102, 103, 104, 105])
for i in range(len(stu_roll)):
    print("Index no.", i, "=", stu_roll[i])
