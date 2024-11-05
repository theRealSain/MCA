# Define the Grandparent class
class Grandparent:
    def __init__(self, gname, gage):
        self.gname = gname
        self.gage = gage

    def GrandparentDetails(self):
        print("Grandparent Name:", self.gname)
        print("Grandparent Age:", self.gage)

# Define the Parent class that inherits from Grandparent
class Parent(Grandparent):
    def __init__(self, gname, gage, pname, page):
        # Initialize properties of the Grandparent class
        super().__init__(gname, gage)
        self.pname = pname
        self.page = page

    def ParentDetails(self):
        print("Parent Name:", self.pname)
        print("Parent Age:", self.page)

# Define the Child class that inherits from Parent
class Child(Parent):
    def __init__(self, gname, gage, pname, page, cname, cage):
        # Initialize properties of the Parent class (and Grandparent)
        super().__init__(gname, gage, pname, page)
        self.cname = cname
        self.cage = cage

    def ChildDetails(self):
        print("Child Name:", self.cname)
        print("Child Age:", self.cage)

# Create an object for Child and display all details
child1 = Child("Robert", 78, "Michael", 50, "Emma", 20)

# Display the details of each family member
child1.GrandparentDetails()
child1.ParentDetails()
child1.ChildDetails()
