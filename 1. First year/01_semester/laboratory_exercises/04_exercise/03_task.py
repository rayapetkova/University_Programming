def sum_nums(a, b):
    return a + b


def subtract_nums(a, b):
    return a - b


def multiply_nums(a, b):
    return a * b


def divide_nums(a, b):
    if b != 0:
        return a / b

    return "Cannot divide by zero!"


operation = input("Въведете операция: ")
first_num = float(input("Въведете първото число: "))
second_num = float(input("Въведете второто число: "))

if operation == "Събиране":
    sum_nums(first_num, second_num)
elif operation == "Изваждане":
    subtract_nums(first_num, second_num)
elif operation == "Умножение":
    multiply_nums(first_num, second_num)
elif operation == "Деление":
    divide_nums(first_num, second_num)
