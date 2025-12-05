number = int(input('Enter number of symbols: '))

with open('hello.txt', 'r') as f:
    print(f.read(number))
