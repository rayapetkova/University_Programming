import random

count_nums = int(input("Enter count of numbers: "))

numbers_list = [11, 20, 19, 4, 1, 8, 4]

# for i in range(count_nums):
#     numbers_list.append(random.randint(0, 100))

even_idx_nums = []
odd_idx_nums = []

for j in range(len(numbers_list)):
    if j % 2 == 0:
        even_idx_nums.append(numbers_list[j])
    else:
        odd_idx_nums.append(numbers_list[j])

even_idx_nums.sort()
odd_idx_nums.sort(reverse=True)

smaller_list = even_idx_nums if len(even_idx_nums) < len(odd_idx_nums) else odd_idx_nums
final_result = []

for _ in range(len(smaller_list)):
    final_result.append(even_idx_nums[0])
    del even_idx_nums[0]

    final_result.append(odd_idx_nums[0])
    del odd_idx_nums[0]

bigger_list = even_idx_nums if even_idx_nums else odd_idx_nums

print(final_result + bigger_list)
