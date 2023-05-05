# Nested  While Loop
a = 1
while a <= 3:
    print("\t\tOuter While Loop", a)
    a += 1
    j = 1
    while j <= 5:
        print("Inner While Loop", j)
        j += 1
print("Rest of the Code")
