diction = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'


def decrypt(message, key):
    decrypted_message = ""
    for i in message:
        location = diction.index(i) - key
        location %= 26
        decrypted_message += diction[location]
    return decrypted_message


message = input("Enter Plain Text : ")
message = message.upper()  # to convert lower to upper case.
message = message.replace(" ", "")  # to remove spaces from message
key = int(input("Enter the Key : "))

decrypt(message, key)
print("Plain Text : ", message)
print("Cipher Text : ", decrypt(message, key))
print("Shift Key : ", key)
