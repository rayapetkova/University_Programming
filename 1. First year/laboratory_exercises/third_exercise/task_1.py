n = int(input())

final_result = []

for num in range(1, n + 1):
    final_result.append(num)

first_tuple = tuple(final_result)
second_tuple = tuple(final_result[::-1])

print(first_tuple)
print(second_tuple)
