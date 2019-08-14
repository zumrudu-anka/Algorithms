def SelectionSort(list):
    for i in range(0, len(list) - 1):
        index = i
        for j in range(i + 1,len(list)):
            if list[j] < list[index]:
                index = j
        temp = list[i]
        list[i] = list[index]
        list[index] = temp
    return list

list = [16, 13, 55, 27, 35, 18, 1, 0, 14, 13, 14, 19, 138]

print(SelectionSort(list))