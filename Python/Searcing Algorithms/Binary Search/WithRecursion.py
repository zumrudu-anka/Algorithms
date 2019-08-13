def BinarySearchWithRecursion(liste, value):
    if int(len(liste)/2) == 0:
        if liste[int(len(liste)/2)] == value:
            return True
        return False
    elif liste[int(len(liste)/2)] == value:
        return True
    elif liste[int(len(liste)/2)] > value:
        print('Kucuk Yarida Aranacak')
        return BinarySearchWithRecursion(liste[0:int(len(liste) / 2)], value)
    else:
        print('Buyuk Yarida Aranacak')
        return BinarySearchWithRecursion(liste[int(len(liste) / 2):len(liste)], value)

liste = [3, 5, 7, 15, 18, 27, 66, 78, 100, 105, 110, 138]
print(BinarySearchWithRecursion(liste, 139))