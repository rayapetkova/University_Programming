sum_numbers = 0
numbers_count = 0

for num in range(7, 71):
    if num % 3 == 0:
        numbers_count += 1
        sum_numbers += num

print(sum_numbers / numbers_count)