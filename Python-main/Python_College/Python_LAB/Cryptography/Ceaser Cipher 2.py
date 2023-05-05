diction = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'


def encrypt(message, key):
    encrypted_message = ""
    for i in message:
        location = diction.index(i) + key
        location %= 26
        encrypted_message += diction[location]
    return encrypted_message


message = input("Enter Plain Text : ")
message = message.upper()  # to convert lower to upper case.
message = message.replace(" ", "")  # to remove spaces from message
key = int(input("Enter the Key : "))

# encrypt(message, key)
print("Plain Text : ", message)
print("Cipher Text : ", encrypt(message, key))
print("Shift Key : ", key)
