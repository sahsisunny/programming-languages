# Output Statements


print("Welcome to Shield Squads")
print()
print('Welcome to Shield Squads')
print("Welcome", "to", "Shield Squads")
print(10)

print("Welcome")
print("to")
print("Shield Squads")

print("Welcome ", "to ", "Shield ", "Squads", sep='')
print("Welcome ", "to ", "Shield ", "Squads", sep='***')
print("Welcome ", "to ", "Shield ", "Squads", sep='Any Character')

print("Welcome ", end='\n')  # Default \n Escape Sequence
print("to", end='\n')  # Default \n Escape Sequence
print("Shield Squads", end='\n')  # Default \n Escape Sequence

print("Welcome ", end='')
print("to", end='\t')
print("Shield Squads")

a = 10
b = 20
print(a, b)
print(a, b, sep=' ')
print(a, b, sep=',')

name = "Sunny"
age = 21
print("My name is", name, "and my age is", age)
