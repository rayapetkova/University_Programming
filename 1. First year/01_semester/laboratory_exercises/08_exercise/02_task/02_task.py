words = 0

with open('hello.txt', 'r') as f:
    lines = f.readlines()

    for row in lines:
        words_per_line = len(row.split())
        words += words_per_line

    print(f"Rows count: {lines}")
    print(f"All words: {words}")
