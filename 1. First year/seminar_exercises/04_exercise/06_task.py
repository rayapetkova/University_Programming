class TriangleChecker:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c
        self.canBeTriangle = False

    def is_triangle(self):
        if self.a < 0 or self.b < 0 or self.c < 0:
            return 'Нищо няма да работи с отрицателни числа!'

        if not (str(self.a).isdigit() and str(self.b).isdigit() and str(self.c).isdigit()):
            return 'Трябва да въведете само числа!'

        if self.a + self.b > self.c and self.a + self.c > self.b and self.b + self.c > self.a:
            self.canBeTriangle = True
            return 'Ура, можете да построите триъгълник!'

        return 'Жалко, но не можете да направите триъгълник от това!'

    def get_triangle_type(self):
        if not self.canBeTriangle:
            return 'не може да се създаде триъгълник'

        if self.a == self.b == self.c:
            return 'равностранен'
        elif self.a == self.b or self.a == self.c or self.b == self.c:
            return 'равнобедрен'
        
        return 'разностранен'


triangle = TriangleChecker(1, 2, 5)
print(triangle.is_triangle())
print(triangle.get_triangle_type())
