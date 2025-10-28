today = int(input())
days = int(input())

if (today + days) % 7 == 0:
    print('неделя')
elif (today + days) % 6 == 0:
    print('събота')
elif (today + days) % 5 == 0:
    print('петък')
elif (today + days) % 4 == 0:
    print('четвъртък')
elif (today + days) % 3 == 0:
    print('сряда')
elif (today + days) % 2 == 0:
    print('вторник')
else:
    print('понеделник')
