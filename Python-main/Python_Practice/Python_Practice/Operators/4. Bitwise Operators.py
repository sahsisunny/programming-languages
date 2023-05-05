# Bitwise Operators
a = int(input("Enter the 1st number: "))
b = int(input("Enter the 2nd number: "))

print("\n~~~~~~~~~~~BITWISE AND~~~~~~~~~~~\n")
x = a < b
y = a > b
# 1. Bitwise AND: True if both the operands are true
print(x, "AND", y, "=", x & y)

x = a > b
y = a < b
# 1. Bitwise AND: True if both the operands are true
print(x, "AND", y, "=", x & y)

x = a < b
y = a < b
# 1. Bitwise AND: True if both the operands are true
print(x, "AND", y, "=", x & y)

x = a > b
y = a > b
# 1. Bitwise AND: True if both the operands are true
print(x, "AND", y, "=", x & y)

# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

print("\n~~~~~~~~~~~BITWISE OR~~~~~~~~~~~\n")
x = a < b
y = a > b
# 2. Bitwise OR: True if either of the operands is true
print(x, "OR", y, "=", x | y)

x = a > b
y = a < b
# 2. Bitwise OR: True if either of the operands is true
print(x, "OR", y, "=", x | y)

x = a < b
y = a < b
# 2. Bitwise OR: True if either of the operands is true
print(x, "OR", y, "=", x | y)

x = a > b
y = a > b
# 2. Bitwise OR: True if either of the operands is true
print(x, "OR", y, "=", x | y)

# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

print("\n~~~~~~~~~~~BITWISE NOT~~~~~~~~~~~\n")
x = False
# 3. Bitwise NOT: True if operand is false
print(x, "NOT=", ~ x)

x = True
# 3. Bitwise NOT: True if operand is false
print(x, "NOT=", ~ x)

# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

print("\n~~~~~~~~~~~BITWISE XOR~~~~~~~~~~~\n")
x = a < b
y = a > b
# 2. Bitwise XOR: True if either of the operands is true
print(x, "XOR", y, "=", x ^ y)

x = a > b
y = a < b
# 2. Bitwise XOR: True if either of the operands is true
print(x, "XOR", y, "=", x ^ y)

x = a < b
y = a < b
# 2. Bitwise XOR: True if either of the operands is true
print(x, "XOR", y, "=", x ^ y)

x = a > b
y = a > b
# 2. Bitwise XOR: True if either of the operands is true
print(x, "XOR", y, "=", x ^ y)

# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

print("\n~~~~~~~~~~~BITWISE Right Shift~~~~~~~~~~~\n")
x = a < b
# 3. Bitwise Right Shift: True if operand is false
print(x, "Right Shift=", x >> 2)

x = a > b
# 3. Bitwise Right Shift: True if operand is false
print(x, "Right Shift=", x >> 2)

# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

print("\n~~~~~~~~~~~BITWISE Left Shift~~~~~~~~~~~\n")
x = False
# 3. Bitwise Left Shift: True if operand is false
print(x, "Left Shift=", x << 2)

x = a > b
# 3. Bitwise Left Shift: True if operand is false
print(x, "Left Shift=", x << 2)
