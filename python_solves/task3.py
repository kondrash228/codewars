def sort_array(source_array):
    odd = [i for i in source_array if not i % 2 == 0]

    odd.sort()
    new_arr = []
    print(f"odd = {odd}")

    for idx, elem in enumerate(source_array):
        if elem % 2 != 0:
            source_array.remove(elem)

            for idx2, elem2 in enumerate(odd):
                #if source_array[idx] > odd[idx] and idx == 0:
                    #source_array.insert(idx + 1, elem2)
                
                #if source_array[idx] > odd[idx] and idx == len(source_array):
                    #source_array.insert(idx - 1, elem2)

                if source_array[idx] > odd[idx2]:
                    source_array.insert(idx + 1, elem2)
                else:
                    source_array.insert(idx - 1, elem2)
               
    print(source_array)
            

# [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]
sort_array([9, 8, 7, 6, 5, 4, 3, 2, 1, 0])

