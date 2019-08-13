def BinarySearch(list, value):
    firstindex = 0
    lastindex = len(list)
    while (lastindex - firstindex) > 0:
        if(list[int((firstindex + lastindex)/2)]) == value:
            return True, int((firstindex + lastindex)/2)
        elif (list[int((firstindex + lastindex)/2)]) < value:
            firstindex = int((firstindex + lastindex)/2) + 1
            print('Buyuk Yarida Aranacak')
        else:
            lastindex = int((firstindex + lastindex)/2)
            print('Kucuk Yarida Aranacak')

    return False, -1

list = [3, 5, 7, 15, 18, 27, 66, 78, 100, 105, 110, 138]

found , index = BinarySearch(list, 139)
print(found , ',', index)