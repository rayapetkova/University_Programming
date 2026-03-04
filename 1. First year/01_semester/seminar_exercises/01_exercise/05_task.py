import sys

n = int(input())

min_number = sys.maxsize
max_number = -sys.maxsize

for _ in range(n):
    num = float(input())

    if num < min_number:
        min_number = num

    if num > max_number:
        max_number = num

print(min_number)
print(max_number)
