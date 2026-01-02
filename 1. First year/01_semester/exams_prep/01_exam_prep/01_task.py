import random

while True:
    try:
        n = int(input('Въведете цяло число между 20 и 30: '))

        if not 20 < n < 30:
            print('Числото трябва да бъде между 20 и 30.')
            continue

        break
    except ValueError:
        print('Числото трябва да бъде цяло.')

numbers = [random.randint(-1000, 1000) for _ in range(n)]

odd_indexes_nums_sum = sum([numbers[i] for i in range(len(numbers)) if i % 2 != 0])
print(f'Сумата на елементите от списъка, чиито индекси са нечетни: {odd_indexes_nums_sum}')

divisible_by_3_nums = []
for num in numbers:
    if len(str(abs(num))) > 1 and int(str(num)[-2]) % 3 == 0:
        divisible_by_3_nums.append(num)

print(f'Броят на елементите от списъка, чиято цифра на десетиците е кратна на 3: {len(divisible_by_3_nums)}')

even_negative_nums_multiplication = 1
found_num = False
for num in numbers:
    if num < 0 and num % 2 == 0:
        even_negative_nums_multiplication *= num
        found_num = True

if found_num:
    print(f'Произведението на елементите с отрицателна стойност, които са четни: {even_negative_nums_multiplication}')
else:
    print('Няма отрицателни числа, които с четни.')

second_numbers = [num for num in numbers if num > n or num < -n]
print(f'Втори списък с числа от първия списък, които са по-големи от {n} или по-малки от {-n}: {second_numbers}')

if second_numbers:
    max_min_nums_diff = max(second_numbers) - min(second_numbers)
    print(f'Разликата между елемента с максимална и елемента с минимална стойност във втория списък: {max_min_nums_diff}')
else:
    print('Вторият списък е празен.')

odd_nums_second = [num for num in second_numbers if num % 2 != 0]
odd_nums_second_len = len(odd_nums_second)
print(f'Нечетните числа от втория списък: {odd_nums_second}. Техният брой: {odd_nums_second_len}')

negative_nums = [num for num in second_numbers if num < 0]

if negative_nums:
    second_numbers.remove(min(negative_nums))
    print(f'Вторият списък с числа след като изтрихме елемента с минимална отрицателна стойност: {second_numbers}')
else:
    print('Няма отрицателни числа.')
