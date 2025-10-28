numbers_sum = 0

for num in range(1, 51):
    if num % 2 == 0 and num % 3 == 0:
        continue

    if num % 2 == 0 or num % 3 == 0:
        numbers_sum += num

print(numbers_sum)
