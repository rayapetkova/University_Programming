class Operation:
    def __init__(self, text1, text2):
        if not str(text1).isdigit() and not str(text2).isdigit():
            self.text = text1 + text2
        elif str(text1).isdigit() and str(text2).isdigit():
            self.number = int(text1) + int(text2)
        elif (str(text1).isdigit() and not str(text2).isdigit()) or (not str(text1).isdigit() and str(text2).isdigit()):
            self.text = text1 if not str(text1).isdigit() else text2
            self.number = int(text1) if str(text1).isdigit() else int(text2)


operation1 = Operation('first', 'second')
print(operation1.__dict__)

operation2 = Operation('first', 1)
print(operation2.__dict__)

operation3 = Operation(2, 'second')
print(operation3.__dict__)

operation4 = Operation(2, 3)
print(operation4.__dict__)
