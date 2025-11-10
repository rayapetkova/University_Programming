text = input().strip()

dictionary = {}

for symbol in text:
    dictionary[symbol] = text.count(symbol)

print(dictionary)
