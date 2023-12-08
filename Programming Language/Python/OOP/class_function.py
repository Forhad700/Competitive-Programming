class SoftwarEngineer:
    def __init__(self, name, age, level, role):
        self.name = name
        self.age = age
        self.level = level
        self.role = role

    # instance method
    def code(self):
        print(f'{self.name} is coding')

    def code_language(self, language):
        print(f'{self.name} is coding in {language}')

    def info(self):
        info = f'Name: {self.name}, Age: {self.age}, Level: {self.level}, Role: {self.role}'
        return info

s1 = SoftwarEngineer("Alex",25,1,"SDE")
s2 = SoftwarEngineer("Hary",30,3,"DevOps")

s1.code()
s2.code()

s1.code_language('Python')
s2.code_language("Java")

print(s1.info())
print(s2.info())



# # dunder method
# class SoftwarEngineer:
#     def __init__(self, name, age, level, role):
#         self.name = name
#         self.age = age
#         self.level = level
#         self.role = role

#     # instance method
#     def code(self):
#         print(f'{self.name} is coding')

#     def code_language(self, language):
#         print(f'{self.name} is coding in {language}')

#     # dunder method
#     def __str__(self):
#         info = f'Name: {self.name}, Age: {self.age}, Level: {self.level}, Role: {self.role}'
#         return info

# s1 = SoftwarEngineer("Alex",25,1,"SDE")
# s2 = SoftwarEngineer("Hary",30,3,"DevOps")

# s1.code()
# s2.code()

# s1.code_language('Python')
# s2.code_language("Java")

# print(s1)
# print(s2)



# # check equal
# class SoftwarEngineer:
#     def __init__(self, name, age, level, role):
#         self.name = name
#         self.age = age
#         self.level = level
#         self.role = role

#     # instance method
#     def code(self):
#         print(f'{self.name} is coding')

#     def code_language(self, language):
#         print(f'{self.name} is coding in {language}')

#     def __eq__(self,other):
#         return self.name == other.name and self.age == other.age and self.level == other.level and self.role == other.role

# s1 = SoftwarEngineer("Alex",25,1,"SDE")
# s2 = SoftwarEngineer("Alex",25,1,"SDE")

# print(s1==s2)



# class SoftwarEngineer:
#     def __init__(self, name, age, level, role):
#         self.name = name
#         self.age = age
#         self.level = level
#         self.role = role

#     # instance method
#     def code(self):
#         print(f'{self.name} is coding')

#     def code_language(self, language):
#         print(f'{self.name} is coding in {language}')

#     def __str__(self):
#         info = f'Name: {self.name}, Age: {self.age}, Level: {self.level}, Role: {self.role}'
#         return info

#     def __eq__(self,other):
#         return self.name == other.name and self.age == other.age and self.level == other.level and self.role == other.role
    
#     @staticmethod
#     def entry_salary(age):
#         if age<25:
#             return 20000
#         if age<30:
#             return 40000
#         return 50000

# s1 = SoftwarEngineer("Alex",25,1,"SDE")
# s2 = SoftwarEngineer("Alex",25,1,"SDE")

# print(SoftwarEngineer.entry_salary(26))
# print(s1.entry_salary(26))