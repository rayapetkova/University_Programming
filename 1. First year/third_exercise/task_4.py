nums_tuple = ((1, 2, 3), (4, 5, 6))

nums_list = list(nums_tuple)

for i in range(len(nums_list)):
    nums_list[i] = list(nums_list[i])

nums_list[0][1], nums_list[1][1] = nums_list[1][1], nums_list[0][1]

print(nums_list)
