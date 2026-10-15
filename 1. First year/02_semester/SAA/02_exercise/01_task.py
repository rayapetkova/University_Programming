# Даден е едномерен масив. Да се намери броят на двойките съседни елементи, в които сумата на двата елемента <50

num_list = int(input("Enter number of elements in the array: "))
numbers = []
result = 0

for i in range(1, num_list + 1):
    num = int(input(f"Enter num {i}: "))
    numbers.append(num)

for j in range(len(numbers) - 1):
    number = numbers[j]
    next_number = numbers[j + 1]

    if number + next_number < 50:
        result += 1

print(f"Result: {result}")
