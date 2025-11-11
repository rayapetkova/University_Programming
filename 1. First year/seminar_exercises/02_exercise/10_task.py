text = input('Въведете текст: ').split(' ')

smallest_word = '..'
biggest_word = ''

for word in text:
    if len(word) <= len(smallest_word):
        smallest_word = word

    if len(word) > len(biggest_word):
        biggest_word = word

print(f'Smallest word: {smallest_word}')
print(f'Biggest word: {biggest_word}')
