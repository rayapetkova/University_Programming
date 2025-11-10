m = int(input())
n = int(input())

final_result = 1

for num in range(m, n + 1):
    if num % 3 == 0 and num % 4 == 0:
        final_result *= num

print(final_result)
