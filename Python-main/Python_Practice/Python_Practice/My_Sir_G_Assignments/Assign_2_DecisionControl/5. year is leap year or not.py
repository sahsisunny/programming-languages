year = int(input("Enter the Year : "))
if (year % 4 == 0):
    if (year % 100 == 0):
        if (year % 400 == 0):
            print(f"{year} is Leap Year")
        else:
            print(f"{year} is Leap not a Year")
    else:
        print(f"{year} is Leap Year")
else:
    print(f"{year} is Leap not a Year")
