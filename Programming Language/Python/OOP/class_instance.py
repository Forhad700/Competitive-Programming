class SoftwareEngineer:
    title = "I am a Software Engineer"                   # class attritube

    def __init__(self, name, age, level, role):          # instance attribute
        self.name = name
        self.age = age
        self.level = level
        self.role = role

se1 = SoftwareEngineer("Alex",25,1,"SDE")                # instance
print(se1.name, se1.age, se1.level, se1.role)            # instance attribute called
print(se1.title)                                         # class attribute called

se2 = SoftwareEngineer("Hary",30,3,"DevOps")
print(se2.name, se2.age, se2.level, se2.role)
print(se2.title)