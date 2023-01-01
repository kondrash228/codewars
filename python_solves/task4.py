def move_zeros(lst):
    arr_zeros = []
    for idx, elem in enumerate(lst):
        if elem == 0:
            lst.pop(elem)
            arr_zeros.append(elem)
    print(arr_zeros, lst)

    return lst

move_zeros([1, 0, 1, 2, 0, 1, 3])
