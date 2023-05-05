# Logical Operators
# a = int(input("Enter the 1st number: "))
# b = int(input("Enter the 2nd number: "))
a = 9
b = 12

print("\n~~~~~~~~~~~LOGICAL AND~~~~~~~~~~~\n")
x = a < b
y = a > b
# 1. Logical AND: True if both the operands are true
print(x, "AND", y, "=", x and y)

x = a > b
y = a < b
# 1. Logical AND: True if both the operands are true
print(x, "AND", y, "=", x and y)

x = a < b
y = a < b
# 1. Logical AND: True if both the operands are true
print(x, "AND", y, "=", x and y)

x = a > b
y = a > b
# 1. Logical AND: True if both the operands are true
print(x, "AND", y, "=", x and y)

# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

print("\n~~~~~~~~~~~LOGICAL OR~~~~~~~~~~~\n")
x = a < b
y = a > b
# 2. Logical OR: True if either of the operands is true
print(x, "OR", y, "=", x or y)

x = a > b
y = a < b
# 2. Logical OR: True if either of the operands is true
print(x, "OR", y, "=", x or y)

x = a < b
y = a < b
# 2. Logical OR: True if either of the operands is true
print(x, "OR", y, "=", x or y)

x = a > b
y = a > b
# 2. Logical OR: True if either of the operands is true
print(x, "OR", y, "=", x or y)

# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

print("\n~~~~~~~~~~~LOGICAL NOT~~~~~~~~~~~\n")
x = a < b
# 3. Logical NOT: True if operand is false
print(x, "NOT=", not x)

x = a > b
# 3. Logical NOT: True if operand is false
print(x, "NOT=", not x)
