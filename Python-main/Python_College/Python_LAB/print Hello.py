for i in range(0, len("Hello")):
    print("Hello" + "Hello"[i::-1])

print("#################################")

str = "Hello"
for i in range(0, len(str)):
    print(str + str[i::-1])

print("#################################")
s = "Hello"
rs = s[::-1]
for i in range(1, len(s) + 1):
    print(s + s[:i][::-1])

print("#################################")

S = "Hello"
RS = ""
for i in range(0, len(S)):
    RS = RS + "\n" + S + S[i::-1]
print(RS)
