def BinarySearchWithRecursion(list, value):
    if int(len(list)/2) == 0:
        if list[int(len(list)/2)] == value:
            return True
        return False
    elif list[int(len(list)/2)] == value:
        return True
    elif list[int(len(list)/2)] > value:
        print('Kucuk Yarida Aranacak')
        return BinarySearchWithRecursion(list[:int(len(list) / 2)], value)
    else:
        print('Buyuk Yarida Aranacak')
        return BinarySearchWithRecursion(list[int(len(list) / 2):], value)

list = [3, 5, 7, 15, 18, 27, 66, 78, 100, 105, 110, 138]
print(BinarySearchWithRecursion(list, 3))