def sequential_search(list, value):
    """
        Sequential Search for Ordered List
    """
    for i in range (len(list)):
        if list[i] == value:
            return True, i + 1
        elif list[i] > value:
            return False, -1
    return False, -1

list = [2,3,5,7,8,12,15,21,67,100]

found , index = sequential_search(list,11)
print(found, ',' , index)