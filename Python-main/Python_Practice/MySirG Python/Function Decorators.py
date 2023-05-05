def decor_result(result_function):
    def distinction(marks):
        for m in marks:
            if m >= 75:
                print("Congrats!!, You have got distinction")
        else:
            result_function(marks)

    return distinction


@decor_result  # ??
def result(marks):
    for m in marks:
        if m >= 33:
            pass
        else:
            print("Fail")
            break
    else:
        print("Pass")


result([50, 60, 90, 74, 75])
decor_result(result)
