# Python3 program to print all numbers
# between 1 to N in reverse order

# Recursive function to print
# from N to 1
def PrintReverseOrder(N):
    for i in range(N, 0, -1):
        print(i, end=" ")


# Driver code
if __name__ == '__main__':
    N = 5;
    PrintReverseOrder(N);

# This code is contributed by 29AjayKumar
