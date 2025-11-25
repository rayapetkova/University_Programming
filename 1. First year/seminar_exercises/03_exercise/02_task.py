def check_perfect_num(number):
    sum_divisors = 0

    for num in range(1, number):
        if number % num == 0:
            sum_divisors += num

    if sum_divisors == number:
        return True

    return False


numbers = [28, 32, 40]
for number in numbers:
    print(check_perfect_num(number))
