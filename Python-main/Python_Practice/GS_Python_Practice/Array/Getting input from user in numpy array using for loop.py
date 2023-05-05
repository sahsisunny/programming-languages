# Getting input from user in numpy array

n = int(input("Enter number of Elements: "))  # Input number of elements in Array
a = zeros(n, dtype=int)

# Input elements in Array

for i in range(n):
    # for i in range(len(a)):
    x = int(input("Enter Element: "))
    a[i] = x

# Printing elements through For Loop

for i in a:
    print(i)
