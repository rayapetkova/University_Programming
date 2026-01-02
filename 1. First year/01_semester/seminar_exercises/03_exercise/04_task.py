def convert_decimal_to_binary(decimal_number):
    binary_number_list = []

    while decimal_number > 0:
        binary_number_list.append(decimal_number % 2)
        decimal_number = decimal_number // 2

    return ''.join(str(n) for n in binary_number_list[::-1])


print(convert_decimal_to_binary(87))
