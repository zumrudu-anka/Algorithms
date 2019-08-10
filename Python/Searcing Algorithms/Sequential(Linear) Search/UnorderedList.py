def sequential_search(list, value):
    """
        Sequential Search for Unordered List
    """
    for i in range (len(list)):
        if list[i] == value:
            return True, i + 1
    return False, -1

list = [5,7,2,3,15,8,100,13,0,-15,12]
found , index = sequential_search(list,15)
print(found, ',' , index)
