def calculate_nums(list_1, list_2):
    final_result = 0
    shorter_list = list_1 if len(list_1) < len(list_2) else list_2
    longer_list = list_1 if len(list_1) >= len(list_2) else list_2

    difference = len(longer_list) - len(shorter_list)

    if difference:
        additional_elements = shorter_list[:difference]
        shorter_list += additional_elements

    for i in range(len(shorter_list)):
        final_result += shorter_list[0] * longer_list[0]

        del shorter_list[0]
        del longer_list[0]

    return final_result


print(calculate_nums([1, 2], [1, 2, 3, 4]))
