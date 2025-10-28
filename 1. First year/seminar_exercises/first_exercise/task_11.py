skiers_count = int(input())

total_sum = 0

for i in range(skiers_count):
    jackets_count = int(input())
    helmets_count = int(input())
    shoes_count = int(input())

    total_sum += jackets_count * 120 + helmets_count * 75 + shoes_count * 299.90

total_sum += 0.2 * total_sum

print(f'Total sum: {total_sum:.2f}')
