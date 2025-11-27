try:
    a = float(input())
    b = float(input())

    print(a + b)
    print(a - b)
    print(a * b)
    print(a / b)
except ValueError:
    print('Invalid input. Please enter numbers only.')
except ZeroDivisionError:
    print('Division by zero is not allowed.')
else:
    print('All operations completed successfully.')
finally:
    print('End of calculation.')
