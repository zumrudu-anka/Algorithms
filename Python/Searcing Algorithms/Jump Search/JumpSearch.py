import math
def JumpSearch(list, value):
    jump_length = int(math.sqrt(len(list)))
    for i in range(jump_length, len(list), jump_length):
        if list[i] > value:
            for j in list[(i - jump_length):i]:
                if j == value:
                    return True, list.index(j)
        else:
            if (i + jump_length) >= len(list):
                for j in list[i:len(list)]:
                    if j == value:
                        return True, list.index(j)
    return False, -1

list = [1, 3, 7, 9, 11, 13, 19, 29, 38, 46, 51, 87, 99, 110, 132, 159]
found, index = JumpSearch(list, 159)
print(found, ',', index)
