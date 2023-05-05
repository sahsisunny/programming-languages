def CountFrequency(my_list):
    freq = {}
    for item in my_list:
        if (item in freq):
            freq[item] += 1
        else:
            freq[item] = 1
    for key, value in freq.items():
        print("%d : %d " % (key, value))


if __name__ == "__main__":
    my_list = [1, 5, 1, 2]
CountFrequency(my_list)
