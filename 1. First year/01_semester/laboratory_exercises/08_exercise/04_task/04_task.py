with open('data.txt', 'r') as f:
    lines = f.readlines()

    for line in lines:
        words = line.split()

        if 'Python' in words:
            print(line)
