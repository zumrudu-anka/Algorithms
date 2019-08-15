def QuickSort(list, low, high):
    if low < high:
        pivot = Partition(list, low, high)
        QuickSort(list, low, pivot - 1)
        QuickSort(list, pivot + 1, high)

def Partition(list, low, high):
    pivot = low 
    for i in range(low , high): 
        if list[i] <= list[high]:
            list[pivot], list[i] = list[i], list[pivot]
            pivot += 1
    list[pivot], list[high] = list[high], list[pivot]
    return pivot

list = [35, 33, 42, 10, 14, 19, 27, 44, 26, 31]
QuickSort(list, 0, 9)
print(list)