# площадка наричаме два или повече съседни и еднакви елемента на едномерен масив
# да се намери броят на площадките и дължината на всяка една от тях за даден едномерен масив

num_list = int(input("Enter number of elements in the array: "))
numbers = []


for i in range(1, num_list + 1):
    num = int(input(f"Enter num {i}: "))
    numbers.append(num)

playgrounds, found_pg = [], False

for i in range(0, len(numbers)):
    number = numbers[i]
    next_num = None

    if i + 1 < len(numbers):
        next_num = numbers[i + 1]

    if not found_pg:
        pg = []

    if number == next_num:
        pg.append(number)
        found_pg = True
    else:
        pg.append(number)

        if len(pg) >= 2:
            playgrounds.append(pg)

        found_pg = False

print(playgrounds)
