#	Accessing numpy array using For Loop

stu_roll = array([101, 102, 103, 104, 105])
print("WIthout Index")
i = 0
for element in stu_roll:
    print("index no.", i, "=", element)
    i += 1

print("WIth Index")

l = len(stu_roll)
for i in range(l):
    print("index no.", i, "=", stu_roll[i])

print("Number of  element = ", l)
