def QuickSort(list, low, high):
    if low < high:
        pivot = Partition(list, low, high)
        QuickSort(list, low, pivot - 1)
        QuickSort(list, pivot + 1, high)

def Partition(list, low, high):
    index = low
    pivot = list[high] 
    for i in range(low , high): 
        if list[i] <= pivot:
            list[index], list[i] = list[i], list[index]
            index += 1
    list[index], list[high] = list[high], list[index]
    return index

list = [35, 33, 42, 10, 14, 19, 27, 44, 26, 31]
QuickSort(list, 0, 9)
print(list)