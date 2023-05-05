name = input("Enter the Student Name: ")
roll = int(input("Enter the Student Roo number: "))
print("~~~Marks will be less than or equal to 100~~~")
python = int(input("Enter the Python marks : "))
ssad = int(input("Enter the SSAD marks : "))
os = int(input("Enter the Operating System marks : "))
stat = int(input("Enter the Statistics marks : "))
envlaw = int(input("Enter the Environmental Law marks : "))

total = python + ssad + os + stat + envlaw
percentage = (total / 500) * 100
if python >= 30 and ssad >= 30 and os >= 30 and stat >= 30 and envlaw >= 30:
    if 30 >= total < 45:
        print(f"{name} ({roll}) is PASS from 3rd Division and there percentage is {percentage}%.")
    elif 45 <= total < 60:
        print(f"{name} ({roll}) is PASS from 2nd Division and there percentage is {percentage}%.")
    elif 60 <= total < 100:
        print(f"{name} ({roll}) is PASS from 1st Division and there percentage is {percentage}%.")
else:
    print(f"{name} ({roll}) is FAIL")
