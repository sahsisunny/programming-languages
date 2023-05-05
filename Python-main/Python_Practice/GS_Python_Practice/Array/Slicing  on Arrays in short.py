# Slicing  on Arrays in short

from array import *

stu_roll = array('i', [101, 102, 103, 104, 105, 106, 107])
for i in stu_roll[0:7:2]:
    print(i)
print("Rest of the Code")
