today = int(input())
days = int(input())

day = (today + days) % 7

if day == 1:
    print('понеделник')
elif day == 2:
    print('вторник')
elif day == 3:
    print('сряда')
elif day == 4:
    print('четвъртък')
elif day == 5:
    print('петък')
elif day == 6:
    print('събота')
elif day == 7:
    print('неделя')
