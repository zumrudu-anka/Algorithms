def InsertionSort(list):
    for i in range(1,len(list)):
        for j in range(i, 0, -1):
            if list[j] < list[j - 1]:
                temp = list[j]
                list[j] = list[j - 1]
                list[j - 1] = temp
    return list

list = [16, 13, 55, 27, 35, 18, 1, 0, 14, 13, 14, 19, 138]

print(InsertionSort(list))