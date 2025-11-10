def square_area(a):
    area = a * a
    return f"Лицето на квадрата е: {area}"


def rectangle_area(a, b):
    area = a * b
    return f"Лицето на правоъгълника е: {area}"


def triangle_are(a, b):
    area = (a * b) / 2
    return f"Лицето на правоъгълния триъгълник е: {area}"


figure = input()
if figure == "квадрат":
    a = float(input("Въведете страна: "))

    print(square_area(a))
elif figure == "правоъгълник":
    a = float(input("Въведете a: "))
    b = float(input("Въведете b: "))

    print(rectangle_area(a, b))
elif figure == "правоъгълен триъгълник":
    a = float(input("Въведете a: "))
    b = float(input("Въведете b: "))

    print(triangle_are(a, b))

