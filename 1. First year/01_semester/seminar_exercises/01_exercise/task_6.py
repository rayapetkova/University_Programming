type_figure = input()

if type_figure == "квадрат":
    a = float(input())
    area = a * a
    perimeter = a * 4
    print(f'S = {area}')
    print(f'P = {perimeter}')

if type_figure == "правоъгълник":
    a = float(input())
    b = float(input())
    area = a * b
    perimeter = a * 2 + b * 2
    print(f'S = {area}')
    print(f'P = {perimeter}')

if type_figure == "правоъгълен триъгълник":
    a = float(input())
    b = float(input())
    c = float(input())
    area = a * b / 2
    perimeter = a + b + c
    print(f'S = {area}')
    print(f'P = {perimeter}')

