import math


class Shape:
    def __init__(self, figure):
        self.figure = figure

    def area(self):
        return 0


class Square(Shape):
    def __init__(self, figure, length):
        super().__init__(figure)
        self.length = length

    def area(self):
        return self.length ** 2


class Circle(Shape):
    def __init__(self, figure, radius):
        super().__init__(figure)
        self.radius = radius

    def area(self):
        return math.pi * self.radius ** 2


user_figure = input()
if user_figure == 'square':
    square = Square(user_figure, 3)
    print(square.area())
elif user_figure == 'circle':
    circle = Circle(user_figure, 4)
    print(circle.area())
