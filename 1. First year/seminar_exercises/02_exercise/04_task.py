text_tuple = tuple(input("Въведете текст: "))

print(text_tuple)

distance = int(input("Enter distance: "))
final_result = list(text_tuple)[::distance]

print(tuple(final_result))
