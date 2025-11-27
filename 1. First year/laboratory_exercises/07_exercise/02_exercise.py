def read_positive_int():
    text = input()

    if not (text.isdigit() or (text.startswith('-') and text[1:].isdigit())):
        raise ValueError('Invalid integer number.')

    num = int(text)
    if num <= 0:
        raise Exception('Number must be positive.')

    return num


try:
    number = read_positive_int()
except ValueError as v_e:
    print(v_e)
except Exception as e_e:
    print(e_e)
else:
    print(f'You entered a valid positive number: {number}')

