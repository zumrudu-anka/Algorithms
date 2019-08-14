def MergeSort(list):
	if len(list) > 1:
		left_half = list[:len(list) // 2]
		right_half = list[len(list) // 2:]
		MergeSort(left_half)
		MergeSort(right_half)
		i = j = k = 0
		while (i < len(left_half)) and (j < len(right_half)):
			if left_half[i] < right_half[j]:
				list[k] = left_half[i]
				i += 1
			else:
				list[k] = right_half[j]
				j += 1
			k += 1
		if i < len(left_half):
			for index in range(i,len(left_half)):
				list[k] = left_half[index]
				k += 1
		else:
			for index in range(j,len(right_half)):
				list[k] = right_half[index]
				k += 1

list = [16, 13, 55, 27, 35, 18, 1, 0, 14, 13, 14, 19, 138]
MergeSort(list)
print(list)