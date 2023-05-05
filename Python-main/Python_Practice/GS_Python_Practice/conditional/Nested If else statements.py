# Nested If else statements
a, b, c, d = 5, 3, 9, 7

if a > b:
    if d < c:
        print("Parent and Child if Statement is True")
    else:
        print("Parent if Statement is True but Child is False")
else:
    print("Parent and Child if Statement is False")
print("Rest of the Code")
