def check_prime(number):
    divisors = 1

    for num in range(2, number):
        if number % num == 0:
            divisors += 1

    if divisors > 1:
        return False

    return True


print(check_prime(7))
