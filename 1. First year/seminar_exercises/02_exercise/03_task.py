text = input()

final_dict = {}

for i in range(len(text)):
    symbol = text[i]

    current_text = text
    current_text = current_text.replace(symbol, '', 1)

    final_dict[symbol] = current_text

print(final_dict)
