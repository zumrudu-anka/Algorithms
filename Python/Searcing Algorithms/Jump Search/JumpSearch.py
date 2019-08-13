import math
def JumpSearch(liste, value):
    jump_length = int(math.sqrt(len(liste)))
    for i in range(jump_length, len(liste), jump_length):
        if liste[i] > value:
            for j in liste[(i - jump_length):i]:
                if j == value:
                    return True, liste.index(j)
        else:
            if (i + jump_length) >= len(liste):
                for j in liste[i:len(liste)]:
                    if j == value:
                        return True, liste.index(j)
    return False, -1

liste = [1, 3, 7, 9, 11, 13, 19, 29, 38, 46, 51, 87, 99, 110, 132, 159]
found, index = JumpSearch(liste, 159)
print(found, ',', index)
