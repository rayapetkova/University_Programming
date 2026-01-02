import random

words = ['random', 'world', 'hello']

word = words[random.randint(0, len(words) - 1)]

guess_text = ['-' for _ in range(len(word))]
guesses_count = 0

while True:
    user_guess_letter = input()

    if user_guess_letter in word:
        guess_text[word.index(user_guess_letter)] = user_guess_letter

    guesses_count += 1

    if guesses_count == len(word) + 5:
        print("Съжалявам, не позна думата !!!")
        break

    if '-' not in guess_text:
        print(f"Браво!!! Ти Успя! Думата е {''.join(word)}, броят на опитите е {guesses_count}")
        break

    print(' '.join(guess_text))

