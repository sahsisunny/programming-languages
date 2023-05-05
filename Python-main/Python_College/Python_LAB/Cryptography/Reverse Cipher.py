msg = input("Enter the String: ")
enc = ""
length = (len(msg)) - 1
while length >= 0:
    enc = enc + msg[length]
    length = length - 1
print(enc)
