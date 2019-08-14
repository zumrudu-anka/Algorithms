def CountingSort(list):
    count_list = [0] * (max(list) + 1)
    for i in list:
        count_list[i] += 1
    index = 0
    for i in range(len(count_list)):
        if count_list[i] > 0:
            for j in range(count_list[i]):
                list[index] = i
                index += 1
    return list

list = [16, 13, 55, 27, 35, 18, 1, 0, 14, 13, 14, 19, 39]
print(CountingSort(list))
