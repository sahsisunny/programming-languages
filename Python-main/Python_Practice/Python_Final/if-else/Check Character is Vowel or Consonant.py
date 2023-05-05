ch = input("Enter the Character: ")

if ch.upper():
    if ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U':
        print(f"{ch} is Vowel")
    else:
        print(f"{ch} is Consonant")
else:
    if ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u':
        print(f"{ch} is Vowel")
    else:
        print(f"{ch} is Consonant")
