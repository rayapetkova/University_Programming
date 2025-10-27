import random

nums_list = []
count_nums = int(input())

final_list = []

for i in range(count_nums):
    random_number = random.randint(0, 100)
    nums_list.append(random_number)


final_list = []
for j in range(len(nums_list)):
    if j >= 1:
        final_list.append(nums_list[j - 1] + nums_list[j])
        final_list.append(nums_list[j])
    else:
        final_list.append(nums_list[j])

print(final_list)
