number = int(input())
numbers_list = [num for num in range(1, number + 1)]
nums_dict = {num: numbers_list[-num] for num in numbers_list}

print(nums_dict)
