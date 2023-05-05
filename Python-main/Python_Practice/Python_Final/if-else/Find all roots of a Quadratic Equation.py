import math

a = int(input(" Enter the Coefficient of a: "))
b = int(input(" Enter the Coefficient of b: "))
c = int(input(" Enter the Coefficient of c: "))
discriminant = b * b - 4 * a * c
if discriminant > 0:
    r1 = (-b + math.sqrt(discriminant)) / (2 * a)
    r2 = (-b - math.sqrt(discriminant)) / (2 * a)
    print("Roots are real and unequal ", r1, "and", r2)
elif discriminant == 0:
    r1 = -b / (2 * a)
    print("Roots are real and same", r1)
else:
    print("No real roots are there")
