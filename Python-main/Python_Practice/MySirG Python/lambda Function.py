s = lambda a, b: a + b
res = s(10, 25)
print(res)

# Ex-2
print("Enter two numbers: ")
s = (lambda a, b: a if a > b else b)(int(input()), int(input()))
print("Greater number is: ", s)

# Ex-3 Factorial Program
"""
def fact(a):
    if a==0:
        return 1
    else:
        return a*fact(a-1)
res=fact(5)
print(res)
"""

s = lambda a: 1 if a == 0 else a * s(a - 1)
r = s(5)
print("Factorial is ", r)
