def calculate_avg_max_min(*numbers):
    average_nums = sum(numbers) / len(numbers)
    max_num = max(numbers)
    min_num = min(numbers)

    return [average_nums, max_num, min_num]


print(calculate_avg_max_min(1, 2, 3, 4))
