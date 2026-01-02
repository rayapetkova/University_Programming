prime_nums_sum = 0
nonprime_nums_sum = 0

while True:
    text = input()

    if text == 'stop':
        break

    number = int(text)

    if number < 0:
        print('Number is negative.')
        continue

    count_numbers = 0
    for num in range(1, number + 1):
        if number % num == 0:
            count_numbers += 1

    if count_numbers == 2:
        prime_nums_sum += number
    else:
        nonprime_nums_sum += number

print(f'Sum of all prime numbers is: {prime_nums_sum}')
print(f'Sum of all nonprime numbers is: {nonprime_nums_sum}')
