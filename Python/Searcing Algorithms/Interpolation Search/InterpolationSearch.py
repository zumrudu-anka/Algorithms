def InterpolationSearch(list, value):
    low = 0
    high = len(list) - 1
    while low <= high and value >= list[low] and value <= list[high]:
        position = int(low + ((high - low) / (list[high] - list[low]) * (value - list[low])))
        if list[position] == value:
            return True, position
        elif list[position] < value:
            low = position + 1
        else:
            high = position - 1
    return False, -1

list = [3, 5, 7, 15, 18, 27, 66, 78, 100, 105, 110, 138]
found, index = InterpolationSearch(list, 66)
print(found, ',', index)