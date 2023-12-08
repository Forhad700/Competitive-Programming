class Employee:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    def work(self):
        print(f'{self.name} is working')

class SoftwareEngineer(Employee):
    pass

class Designer(Employee):
    pass

se = SoftwareEngineer('Alex', 25)
print(se.name, se.age)
se.work()

d = Designer('Hary', 30)
print(d.name, d.age)
d.work()



# class Employee:
#     def __init__(self, name, age, salary):
#         self.name = name
#         self.age = age
#         self.salary = salary
    
#     def work(self):
#         print(f'{self.name} is working')

# class SoftwareEngineer(Employee):
#     def __init__(self, name, age, salary, level):
#         super().__init__(name, age, salary)
#         self.level = level

#     def debug(self):
#         print(f'{self.name} is debugging')

# class Designer(Employee):
#     def draw(self):
#         print(f'{self.name} is drwaing')

# se = SoftwareEngineer('Alex', 25, 20000, 1)
# se.work()
# se.debug()

# d = Designer('Hary', 30, 30000)
# d.work()
# d.draw()



# override
# class Employee:
#     def __init__(self, name, age, salary):
#         self.name = name
#         self.age = age
#         self.salary = salary
    
#     def work(self):
#         print(f'{self.name} is working')

# class SoftwareEngineer(Employee):
#     def __init__(self, name, age, salary, level):
#         super().__init__(name, age, salary)
#         self.level = level

#     def work(self):
#         print(f'{self.name} is coding')

#     def debug(self):
#         print(f'{self.name} is debugging')

# class Designer(Employee):
#     def work(self):
#         print(f'{self.name} is designing')

#     def draw(self):
#         print(f'{self.name} is drwaing')

# se = SoftwareEngineer('Alex', 25, 20000, 1)
# se.work()

# d = Designer('Hary', 30, 30000)
# d.work()