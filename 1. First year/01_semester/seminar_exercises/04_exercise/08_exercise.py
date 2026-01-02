class Employee:
    def __init__(self, name, position, salary):
        self.name = name
        self.position = position
        self.salary = salary

    def display_info(self):
        return f'{self.name}: Position - {self.position}; Salary - {self.salary}'


class Manager(Employee):
    def __init__(self, name, position, salary, department):
        super().__init__(name, position, salary)
        self.department = department

    def calculate_bonus(self):
        bonus = 0.1 * self.salary * 1000
        return bonus

    def display_info(self):
        return f'{self.name}: Position - {self.position}; Salary - {self.salary}; Department - {self.department}'


class Developer(Employee):
    def __init__(self, name, position, salary, programming_languages):
        super().__init__(name, position, salary)
        self.programming_languages = programming_languages

    def calculate_bonus(self):
        bonus = 0.15 * self.salary + 200 * len(self.programming_languages)
        return bonus

    def display_info(self):
        return f'{self.name}: Position - {self.position}; ' \
               f'Salary - {self.salary}; ' \
               f'Programming Languages: {self.programming_languages}'


class Company:
    def __init__(self, employees):
        self.employees = employees

    def add_employee(self, employee):
        self.employees.append(employee)

    def total_salary_expense(self):
        return sum([employee.salary for employee in self.employees])

    def display_all_employees(self):
        for employee in self.employees:
            print(employee.display_info())
