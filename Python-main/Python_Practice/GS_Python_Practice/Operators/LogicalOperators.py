# Logical Operators
a = 5
b = 2
c = 3
print("\t\tLogical Operators")

print(5 < 2 and 5 > 3)  # Logical and
print(5 < 2 or 5 > 3)  # Logical or
print(not 5 < 3)  # Logical not

print("\t\tLogical and Operators")

print(a > b and c > b)  # True	True		=	True
print(a > b and c < b)  # True	False		=	False
print(a < b and c > b)  # False	True		=	False
print(a < b and c < b)  # False	False		=	False

c = "Expression1"
d = "Expression2"

print(a > b and c)  # True	Expression	=	Expression
print(a < b and c)  # False	Expression	=	False

print(a > b and c and d)  # True 	Expression 	Expression=	Expression	(Last Exp.)
print(a < b and c and b)  # False 	Expression 	Expression=	False

print(a > b and c and b and a > b)  # True 	Expression 	Expression		True	=	True		(Last Exp. or Condition)
print(a < b and c and b and a < b)  # True 	Expression 	Expression		False	=	False		(Last Exp. or Condition)

c = 3
print("\t\tLogical or Operators")
print(a > b or c > b)  # True	True		=	True
print(a > b or c < b)  # True	False		=	True
print(a < b or c > b)  # False	True		=	True
print(a < b or c < b)  # False	False		=	False
c = "Expression1"
d = "Expression2"

print(a > b or c)  # True	Expression	=	True
print(a < b or c)  # False	Expression	=	Expression

print(a > b or c or d)  # True 	Expression 	Expression=	True
print(a < b or c or b)  # False 	Expression 	Expression=	Expression

print("\t\tLogical not Operators")
print(not a < b)  # False=	True
print(not a > b)  # True=  	False
