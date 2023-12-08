class Employee:
    def __init__(self, name, age, salary):
        self.name = name
        self.age = age
        self.__salary = salary

    def get_salary(self):
        print(f'{self.name} salary is {self.__salary}')

class SoftwareEngineer(Employee):
    pass

class Designer(Employee):
    pass

se = SoftwareEngineer('Alex', 25, 20000)
print(se.name, se.age)
se.get_salary()

d = Designer('Hary', 30, 30000)
print(d.name, d.age)
d.get_salary()