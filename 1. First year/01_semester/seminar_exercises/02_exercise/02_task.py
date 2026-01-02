m = int(input())
n = int(input())

numbers = []

for num in range(m, n + 1):
    if (num % 3 == 0 or num % 4 == 0) and not (num % 3 == 0 and num % 4 == 0):
        numbers.append(num)

print(numbers)