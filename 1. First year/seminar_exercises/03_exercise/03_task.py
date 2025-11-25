def convert_binary_to_decimal(binary_number):
    decimal_number = 0
    binary_num_list = list(str(binary_number))[::-1]

    for i in range(len(binary_num_list)):
        decimal_number += int(binary_num_list[i]) * 2 ** i

    return decimal_number


print(convert_binary_to_decimal(1101))
