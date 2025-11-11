import random

n = int(input())
m = int(input())

matrix = [[random.randint(10, 100) for _ in range(m)] for _ in range(n)]
[print(row) for row in matrix]

del_row = int(input("Choose a row to delete: "))
del matrix[del_row - 1]
[print(row) for row in matrix]

del_col = int(input("Choose a column to delete: "))
for i in range(len(matrix)):
    del matrix[i][del_col - 1]

[print(row) for row in matrix]
