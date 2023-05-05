# Identity Operators

# there are two types of Identity Operators
#	1. is
#	2. is not

a = 10
b = 10
c = '10'

print('Memory Location of a= ', id(a))
print('Memory Location of b= ', id(b))
print('Memory Location of c= ', id(c))

print("\tis Operator")

print(a is b)  # True  (Both a and b memory location is same)
print(a is c)  # False

print("\tis  not Operator")

print(a is not b)  # False  (Both a and b memory location is same)
print(a is not c)  # True
