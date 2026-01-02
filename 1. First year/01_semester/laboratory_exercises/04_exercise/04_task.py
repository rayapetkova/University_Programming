def modify_list(nums_list, num):
    return [0 if int(number) > num else int(number) for number in nums_list]


numbers = input("Въведете числа със space: ").split()
num = float(input())

print(modify_list(numbers, num))