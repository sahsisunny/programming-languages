from tkinter import *


def getVals():
    print("it works!!")


root = Tk()
root.geometry("400x250")
root.title("Travel Form 1.0")
# Heading
Label(root, text="Welcome to Maharani Travels", font="comicsansms 13 bold", pady=10).grid(row=0, column=3)
# Text for Our form
name = Label(root, text="Name")
phone = Label(root, text="Phone")
gender = Label(root, text="Gender")
emergency = Label(root, text="Emergency Contact")
pymentmode = Label(root, text="Payment Mode")
# Pack Text
name.grid(row=1, column=2)
phone.grid(row=2, column=2)
gender.grid(row=3, column=2)
emergency.grid(row=4, column=2)
pymentmode.grid(row=5, column=2)

# Tkinter variable for storing entrues
nameValue = StringVar()
phoneValue = StringVar()
genderValue = StringVar()
emergencyValue = StringVar()
pymentmodeValue = StringVar()
foodserviceValue = IntVar()

# Entries for our form
nameEntry = Entry(root, textvariable=nameValue)
phoneEntry = Entry(root, textvariable=phoneValue)
genderEntry = Entry(root, textvariable=genderValue)
emergencyEntry = Entry(root, textvariable=emergencyValue)
pymentmodeEntry = Entry(root, textvariable=pymentmodeValue)

# Packing the entries
nameEntry.grid(row=1, column=3)
phoneEntry.grid(row=2, column=3)
genderEntry.grid(row=3, column=3)
emergencyEntry.grid(row=4, column=3)
pymentmodeEntry.grid(row=5, column=3)

# Checkbuttons & Packing it
foodservice = Checkbutton(text="Want to prebook your meals?", variable=foodserviceValue)
foodservice.grid(row=6, column=3, pady=5)

# Buttons & Packing it and assigning it a command
Button(text="Submit to Maharani Travels", command=getVals).grid(row=7, column=3)

root.mainloop()
