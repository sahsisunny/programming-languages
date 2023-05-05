a = 10
b = 0
try:
    c = a / b
    print(c)
except ZeroDivisionError as obj:
    print(f"{obj} is not Possible!!")
print("Rest of the Code")
