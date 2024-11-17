# Class for personal details
class Personal:
    def __init__(self, name, rollno, age):
        self.name = name
        self.rollno = rollno
        self.age = age
    
    def displaypersonal(self):
        print("Name:", self.name)
        print("Roll Number:", self.rollno)
        print("Age:", self.age)

# Class for academic details
class Academic:
    def __init__(self, attendance, total_marks):
        self.attendance = attendance
        self.total_marks = total_marks
    
    def displayacademic(self):
        print("Attendance:", self.attendance)
        print("Total Marks:", self.total_marks)

# Class for student inheriting from Personal and Academic
class Student(Personal, Academic):
    def __init__(self, name, rollno, age, attendance, total_marks):
        Personal.__init__(self, name, rollno, age)
        Academic.__init__(self, attendance, total_marks)
        self.grade = None
    
    def calculateGrade(self):
        if self.total_marks >= 90:
            self.grade = 'A'
        elif self.total_marks >= 75:
            self.grade = 'B'
        elif self.total_marks >= 60:
            self.grade = 'C'
        elif self.total_marks >= 50:
            self.grade = 'D'
        else:
            self.grade = 'F'
        
        print("Grade:", self.grade)

# Create a student object and display all details
student1 = Student("John Doe", "12345", 20, 85, 92)
student1.displaypersonal()
student1.displayacademic()
student1.calculateGrade()
