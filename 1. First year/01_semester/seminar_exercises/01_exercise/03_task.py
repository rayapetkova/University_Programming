number_string = input()

while not number_string.isdigit():
    number_string = input('Трябва да въведете число: ')

if int(number_string[-1]) % 5 == 0:
    print('Цифрата на единиците се дели на 5.')
else:
    print('Цифрата на единиците НЕ се дели на 5.')

if int(number_string[-2]) % 2 == 0:
    print('Цифрата на десетиците се дели на 2.')
else:
    print('Цифрата на десетиците НЕ се дели на 2.')
