budget = float(input())
season = input()

money_spend = 0
destination = ''
place = ''

if budget <= 100:
    destination = 'Bulgaria'

    if season == 'summer':
        money_spend += 0.3 * budget
        place = 'Camp'
    elif season == 'winter':
        money_spend += 0.7 * budget
        place = 'Hotel'
elif budget <= 1000:
    destination = 'Balkans'

    if season == 'summer':
        money_spend += 0.4 * budget
        place = 'Camp'
    elif season == 'winter':
        money_spend += 0.8 * budget
        place = 'Hotel'
else:
    destination = 'Europe'
    money_spend += 0.9 * budget
    place = 'Hotel'

print(f'Somewhere in {destination}')
print(f'{place} - {money_spend:.2f}')
