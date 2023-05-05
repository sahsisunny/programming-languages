# Getting input from user in numpy array using while loop

n = int(input("Enter number of Elements: "))  # Input number of elements in Array
a = zeros(n, dtype=int)
l = len(a)
i = 0
# Input elements in Array

while i < l:
    x = int(input("Enter Element: "))
    a[i] = x
    i += 1

# Printing elements through For Loop
l = len(a)
j = 0
while j < l:
    print(a[j])
    j += 1
