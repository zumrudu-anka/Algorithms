def BubbleSort(list):
    for i in range(len(list) - 1, 0, -1):
        for j in range(i):
            if (list[j + 1]) < list[j]:
                temp = list[j]
                list[j] = list[j + 1]
                list[j + 1] = temp
    return list

list = [25, 13, 55, 27, 35, 18, 1, 0, 14, 13, 14, 19, 138, 139, 0]
print(BubbleSort(list))