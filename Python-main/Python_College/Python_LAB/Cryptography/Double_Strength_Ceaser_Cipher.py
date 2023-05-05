def msg(text, s):
    result = ""
    for i in range(len(text)):
        char = text[i]
        if (char.isupper()):
            result += chr((ord(char) + s - 65) % 26 + 65)
        else:
            result += chr((ord(char) + s - 97) % 26 + 97)
    return result


text = input("Enter the Message: ")
s = 4  # For Decrypt 26-4 #4 is shift value
print("Plain Text: ", text)
print("Cipher Text: ", msg(text, s))


############################################################
def msg2(text2, s):
    result = ""
    for i in range(len(text2)):
        char = text2[i]
        if (char.isupper()):
            result += chr((ord(char) + s - 65) % 26 + 65)
        else:
            result += chr((ord(char) + s - 97) % 26 + 97)
    return result


text2 = msg(text, s)
print("Double Strength Cipher Text: ", msg2(text2, s))
print("Shift Pattern: ", str(s))
