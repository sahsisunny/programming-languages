# WAP in Python to check Holiday by User enter day name.
d = input("Enter Day Name: ")

if (d == "Monday" or d == "monday"):
    print("Today is Monday not Holiday")
elif (d == "Tuesday" or d == "tuesday"):
    print("Today is Tuesday not Holiday")
elif (d == "Wednesday" or d == "wednesday"):
    print("Today is Wednesday not Holiday")
elif (d == "Thursday" or d == "thursday"):
    print("Today is Thursday not Holiday")
elif (d == "Friday" or d == "friday"):
    print("Today is Friday not Holiday")
elif (d == "Saturday" or d == "saturday"):
    print("Today is Saturday half Holiday")
else:
    if (d == "Sunday" or d == "sunday"):
        print("\aToday is Holiday")
    else:
        print("Incorrect day name")
print("Rest of the Code")
