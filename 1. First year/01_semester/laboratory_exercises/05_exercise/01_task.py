class Person:
    def __init__(self, name, family, age, nationality):
        self.name = name
        self.family = family
        self.age = age
        self.nationality = nationality

    def print(self):
        print(f"Name: {self.name} {self.family}; Nationality: {self.nationality}")


person1 = Person("Ivan", "Georgiev", 42, "Bulgarian")
person1.print()

person2 = Person("Raya", "Petkova", 18, "Bulgarian")
person2.print()
