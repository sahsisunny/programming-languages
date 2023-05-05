# numpy example

# import numpy
# stu_roll=numpy.array([101,102,103,104,105])

stu_roll = array([101, 102, 103, 104, 105])
# stu_roll=numpy.array([101,102,103,104,105], dtype=float)
# stu_roll=numpy.array(['Sunny','Ankit','Kevin','Elon','Elliot'])
# stu_roll=numpy.array(['a','b','c','d','e'])
print(stu_roll)
print(stu_roll.dtype)  # dtype= Data Types of Array

stu_roll[1] = 110  # Change element by position number.

print(stu_roll[0])
print(stu_roll[1])
print(stu_roll[2])
print(stu_roll[3])
print(stu_roll[4])

# print(stu_roll[5])		# index 5 is out of bound.
