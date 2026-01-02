class Person:
    def __init__(self, name, family, age, nationality):
        self.name = name
        self.family = family
        self.age = age
        self.nationality = nationality

    def print(self):
        print(f"Name: {self.name} {self.family}; Nationality: {self.nationality}")


class Lecturer(Person):
    def __init__(self, name, family, age, nationality, university, experience):
        super().__init__(name, family, age, nationality)
        self.university = university
        self.experience = experience

    def print(self):
        print(f"Name: {self.name} {self.family}; Age: {self.age}; Nationality: {self.nationality}; "
              f"University: {self.university}; Experience: {self.experience}")


lecturer1 = Lecturer("Drago", "Ivanov", 34, "Bulgarian", "TU - Sofia", 8)
lecturer1.print()
