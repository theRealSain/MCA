class Student:
    def __init__(self, student_name, rollno, marks):
        # Initialize the student details
        self.student_name = student_name
        self.rollno = rollno
        self.marks = marks

    def calculate_avg(self):
        # Calculate the average of the marks
        if len(self.marks) > 0:
            avg = sum(self.marks) / len(self.marks)
            return avg
        else:
            return 0

    def display(self):
        # Display all the student details along with the average
        print("Student Name:", self.student_name)
        print("Roll Number:", self.rollno)
        print("Marks:", self.marks)
        print("Average Marks:", self.calculate_avg())

# Example usage
# Create an instance of the Student class
student1 = Student("John Doe", 101, [85, 78, 92, 88, 76])

# Calculate average and display details
student1.display()
