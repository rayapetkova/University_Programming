gender = input('Въведете мъж или жена: ')

if gender == 'мъж':
    money = float(input())

    if money >= 250000:
        print('Подходящ кандидат')
    else:
        print('Неподходящ кандидат')
elif gender == 'жена':
    chest = float(input())

    if chest >= 100:
        print('Подходящ кандидат')
    else:
        print('Неподходящ кандидат')
