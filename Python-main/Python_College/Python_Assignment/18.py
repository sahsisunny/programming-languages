from itertools import combinations


def fun(arr, r):
    return list(combinations(arr, r))


if __name__ == "__main__":
    arr = [1, 2, 3, 4]
    r = 2
    print(fun(arr, r))
