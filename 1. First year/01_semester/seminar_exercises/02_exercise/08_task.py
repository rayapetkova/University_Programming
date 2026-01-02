import random

length = int(input())

matrix = [[random.randint(1, 20) for j in range(length)] for i in range(length)]

for row in matrix:
    print(' '.join(str(num) for num in row))
