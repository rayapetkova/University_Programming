# Даден е едномерен масив. Да се състави втори едномерен масив със следните елементи:
# първи елемент: произведението на най-малкия и най-големия елемент на едномерния масив
# втори елемент: средноаритметичната стойност на сумата на четните елементи на едномерния масив
# трети елемент: броят на нечетните елементи на едномерния масив
# четвърти елемент: броят на елементите, чиято стойност е по-голяма от сбора на индексите на двата съседни елемента на съответния елемент


num_list = int(input("Enter number of elements in the array: "))
numbers_1, numbers_2 = [], []
even_numbers, odd_numbers = [], []
bigger_nums_count = 0

for i in range(1, num_list + 1):
    num = int(input(f"Enter num {i}: "))
    numbers_1.append(num)

min_num, max_num = numbers_1[0], numbers_1[0]

for i in range(len(numbers_1)):
    number = numbers_1[i]

    if number % 2 == 0:
        even_numbers.append(number)
    else:
        odd_numbers.append(number)

    if number < min_num:
        min_num = number

    if number > max_num:
        max_num = number

    if i == 0 or i == len(numbers_1) - 1:
        continue

    if number > 2 * i:
        bigger_nums_count += 1

numbers_2.append(min_num * max_num)
numbers_2.append(sum(even_numbers) / len(even_numbers))
numbers_2.append(len(odd_numbers))
numbers_2.append(bigger_nums_count)

print(numbers_2)