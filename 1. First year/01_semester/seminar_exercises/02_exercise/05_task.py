numbers = [int(n) for n in input("Въведете числа на един ред: ").split()]

sorted_nums = sorted(set(numbers[:]))

second_biggest_num = sorted_nums[-2]
new_list = [second_biggest_num, numbers.index(second_biggest_num)]

print(new_list)