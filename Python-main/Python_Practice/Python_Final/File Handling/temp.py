f = open("NameList.txt", mode='r+')
# f.write("Hey xPro!!\n")
# f.write("i am Sunny")
# f.write(' Sahsi.')
data = f.read()
data2 = f.readline()
data3 = f.readlines()
print(data)
f.close()
