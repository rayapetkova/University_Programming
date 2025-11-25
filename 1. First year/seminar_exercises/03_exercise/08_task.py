def find_nok(num_1, num_2):
    bigger_num = num_1 if num_1 > num_2 else num_2

    nok = 1

    for num in range(2, bigger_num + 1):
        if num_1 == 1 and num_2 == 1:
            break

        while num_1 % num == 0 or num_2 % num == 0:
            if num_1 % num == 0:
                num_1 /= num

            if num_2 % num == 0:
                num_2 /= num

            nok *= num

    return nok


print(find_nok(2, 3))
