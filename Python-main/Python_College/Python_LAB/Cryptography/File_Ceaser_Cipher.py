diction = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'


def user_interface():
    fin = open('./msg.txt', 'r')
    fout = open('./cipher.txt', 'w')
    container = fin.readlines()  # to store data in list form.
    message = ''.join(container)  # to convert list to string.
    message = message.replace(" ", "")  # to remove spaces from message
    message = message.upper()  # to convert lower to upper case.
    user_input = input("Welcome to CC Tool\n1. Encryption\n2. Decryption\nEnter the Choice: ")
    if user_input == '1':
        key = int(input("Enter the key value: "))
        fout.write(encrypt(message, key) + '\n')
    else:
        if user_input == '2':
            key = int(input("Enter the key value: "))
            fout.write(decrypt(message, key) + '\n')
        else:
            print("Entered choice is wrong!!")
            user_interface()


def encrypt(message, key):
    encrypted_message = ""
    for i in message:
        location = key + diction.index(i)
        location %= 26  # mod function to indexing start from begning
        encrypted_message += diction[location]
    print("Encryption is Complete\nPlease check the 'Cipher.txt' file.")
    return encrypted_message


def decrypt(message, key):
    decrypted_message = ""
    for i in message:
        location = diction.index(i) - key
        location %= 26  # mod function to indexing start from begning
        decrypted_message += diction[location]
    print("Encryption is Complete\nPlease check the 'Cipher.txt' file.")
    return decrypted_message


# Calling Functions
user_interface()
