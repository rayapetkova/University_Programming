def create_text(text, *numbers):
    final_result = ''

    for i in range(len(text)):
        if i in numbers:
            final_result += text[i]

    return final_result


print(create_text('neshto', 1, 2))
