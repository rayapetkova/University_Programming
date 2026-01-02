text = input("Enter text: ")

with open('log.txt', 'a') as f:
    f.write('\n')
    f.write(text)
