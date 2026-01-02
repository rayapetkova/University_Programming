class Numbers:
    def __init__(self, numbers):
        self.numbers = [num for num in numbers if str(num).isdigit()]

    def show_numbers(self):
        return self.numbers

    def average_numbers(self):
        return sum(self.numbers) / len(self.numbers)


nums = Numbers([1, 2, 'random', 3])
print(nums.show_numbers())
print(nums.average_numbers())
