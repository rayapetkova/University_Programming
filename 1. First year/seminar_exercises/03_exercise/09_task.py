import random


def create_matrix(rows, cols):
    return [[random.randint(1, 10) for _ in range(rows)] for col in range(cols)]


def readable_table_matrix(matrix):
    for row in matrix:
        print(' '.join(str(n) for n in row))


def calculate_sums(matrix):
    all_sums = []

    for col_i in range(len(matrix[0])):
        nums_sum = 0

        for row_i in range(len(matrix)):
            nums_sum += matrix[row_i][col_i]

        all_sums.append(nums_sum)

    print(f"Columns sums:")
    print(' '.join(str(n) for n in all_sums))


matrix = create_matrix(2, 2)
readable_table_matrix(matrix)
calculate_sums(matrix)
