def modify_list(nums_list, num):
    return [0 if number > num else number for number in nums_list]


numbers = [int(n) for n in input("Въведете числа със space: ").split()]
num = float(input())

print(modify_list(numbers, num))