with open('hello.txt', 'r') as f:
    f.seek(5)
    print(f.read())
