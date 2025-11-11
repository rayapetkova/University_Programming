language_dict = {'teacher': 'учител', 'dog': 'куче', 'hair': 'коса'}

while True:
    operation = input("Enter operation: ")

    if operation == "Translate":
        searched_word = input("Enter the word you are searching for: ")

        if searched_word not in language_dict.keys():
            bg_value = input(f'Enter word translation in Bulgarian for the word {searched_word}: ')

            language_dict[searched_word] = bg_value
            print("Word added successfully!")
        else:
            print(f'Translation is: {language_dict[searched_word]}')
    elif operation == "Whole dict":
        print(language_dict)
    elif operation == "Delete":
        del_word = input("Choose a word to delete in English: ")
        del language_dict[del_word]
        print("Word deleted successfully!")
    elif operation == "Exit":
        break

print(language_dict)
