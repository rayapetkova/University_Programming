import sys

n = int(input())

max_number = -sys.maxsize

for i in range(n):
    number = int(input(f"Enter number {i}: "))

    if number > max_number:
        max_number = number

print(f"The max number is: {max_number}")