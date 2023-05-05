def encrypt(message, key):
    result = ""  # Empty String Variable
    for i in range(len(message)):
        char = message[i]  # Take one by one characters
        if (char.isupper()):  # If character is uppercase then run below statement
            result += chr((ord(char) + key - 65) % 26 + 65)
        else:  # If character is lowercase then run below statement
            result += chr((ord(char) + key - 97) % 26 + 97)
    return result  # Return the cipher text


message = input("Enter the Message: ")
key = 4  # For Decrypt 26-4 #4 is shift value

print("Plain Text: ", message)
print("Cipher Text: ", encrypt(message, key))
print("Shift Pattern: ", str(key))
