import random


class Food:
    def __init__(self, carbs, protein, fat):
        self.carbs = carbs
        self.protein = protein
        self.fat = fat

    def calories(self):
        return self.carbs * 4 + self.protein * 4 + self.fat * 9


class Recipe:
    def __init__(self, name):
        self.name = name
        self.ingredients = []

        for _ in range(1, 4):
            food = Food(random.randint(0, 100), random.randint(0, 100), random.randint(0, 100))
            self.ingredients.append(food)

    def calories(self):
        return sum([food.calories() for food in self.ingredients])

    def __str__(self):
        return self.name


n = int(input('Въведете число между 4 и 15: '))

while n < 4 or n > 15:
    n = int((input('Въведете число между 4 и 15: ')))

for i in range(n):
    recipe = Recipe(f'recipe{i}')
    print(recipe)
    print(recipe.calories())
