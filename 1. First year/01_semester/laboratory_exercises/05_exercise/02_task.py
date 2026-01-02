class Person:
    def __init__(self, name, family, age, nationality):
        self.name = name
        self.family = family
        self.age = age
        self.nationality = nationality

    def print(self):
        print(f"Name: {self.name} {self.family}; Nationality: {self.nationality}")


class Student(Person):
    def __init__(self, name, family, age, nationality, university, year_of_study):
        super().__init__(name, family, age, nationality)
        self.university = university
        self.year_of_study = year_of_study

    def print(self):
        print(f"Name: {self.name} {self.family}; Age: {self.age}; Nationality: {self.nationality}; "
              f"University: {self.university}; Year of study: {self.year_of_study}")


student1 = Student("Raya", "Petkova", 18, "Bulgarian", "TU - Sofia", "First year")
student1.print()
