#	Accessing numpy array using while Loop

stu_roll = array([101, 102, 103, 104, 105])

i = 0
l = len(stu_roll)
while i < l:
    print("index no.", i, "=", stu_roll[i])
    i += 1

print("Total number of  element = ", l)
