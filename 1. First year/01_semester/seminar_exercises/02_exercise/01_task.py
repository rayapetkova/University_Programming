num1 = int(input())
num2 = int(input())

collision = []

for digit in str(num1):
    for digit2 in str(num2):
        if digit == digit2:
            collision.append(digit)

print(collision)