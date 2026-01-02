import random

class Number:
    def __init__(self, number):
        self.number = number

    def get_number(self):
        return self.number


def create_numbers(num):
    for _ in range(num):
        while True:
            random_num = random.randint(1, 100)

            if random_num % 2 != 0:
                number_obj = Number(random_num)
                print(number_obj.get_number())
                break


create_numbers(10)
