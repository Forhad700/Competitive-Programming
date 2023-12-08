class Employee:
    def __init__(self, name, age, salary):
        self.name = name
        self.age = age
        self.salary = salary
    
    def work(self):
        print(f'{self.name} is working')

class SoftwareEngineer(Employee):
    def __init__(self, name, age, salary, level):
        super().__init__(name, age, salary)
        self.level = level

    def work(self):
        print(f'{self.name} is coding')

    def debug(self):
        print(f'{self.name} is debugging')

class Designer(Employee):
    def work(self):
        print(f'{self.name} is designing')

    def draw(self):
        print(f'{self.name} is drwaing')


employees = [SoftwareEngineer('Alex', 25, 20000, 1),
             SoftwareEngineer('Cary', 27, 25000, 2),
             Designer('Hary', 30, 30000)]

def motivate_employees(employees):
    for employee in employees:
        employee.work()

motivate_employees(employees)