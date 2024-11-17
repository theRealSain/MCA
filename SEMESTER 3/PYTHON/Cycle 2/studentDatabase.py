import sqlite3

# Connect to SQLite database (it will create the database if it doesn't exist)
conn = sqlite3.connect('students.db')
cursor = conn.cursor()

# Function to check if the table exists
def table_exists():
    cursor.execute("SELECT name FROM sqlite_master WHERE type='table' AND name='students';")
    return cursor.fetchone() is not None

# Function to create the table if it doesn't exist
def create_table_if_needed():
    if not table_exists():
        cursor.execute('''CREATE TABLE IF NOT EXISTS students (
                            student_id INTEGER PRIMARY KEY AUTOINCREMENT,
                            name TEXT NOT NULL,
                            age INTEGER NOT NULL,
                            grade TEXT NOT NULL);''')
        conn.commit()
        print("Table created successfully.")

# Function to insert data into the table
def insert_student():
    create_table_if_needed()  # Ensure the table exists before inserting
    
    name = input("Enter student name: ")
    
    # Validate age input
    age = input("Enter student age: ")
    if not age.isdigit():
        print("Invalid input! Age must be a number.")
        return
    age = int(age)
    
    grade = input("Enter student grade: ")
    cursor.execute('''INSERT INTO students (name, age, grade) VALUES (?, ?, ?)''', (name, age, grade))
    conn.commit()
    print("Student added successfully.")

# Function to display all students
def display_students():
    create_table_if_needed()  # Ensure the table exists before displaying
    
    cursor.execute("SELECT * FROM students")
    students = cursor.fetchall()
    if students:
        print("\nID | Name | Age | Grade")
        print("-------------------------")
        for student in students:
            print(f"{student[0]} | {student[1]} | {student[2]} | {student[3]}")
    else:
        print("No records found.")

# Function to check if a student exists by ID
def student_exists(student_id):
    cursor.execute("SELECT * FROM students WHERE student_id = ?", (student_id,))
    return cursor.fetchone() is not None

# Function to update student data
def update_student():
    create_table_if_needed()  # Ensure the table exists before updating
    
    student_id = input("Enter student ID to update: ")
    if not student_id.isdigit():
        print("Invalid input! Student ID must be a number.")
        return
    student_id = int(student_id)

    # Check if the student ID exists
    if not student_exists(student_id):
        print(f"No student found with ID {student_id}. Please check the ID and try again.")
        return
    
    new_name = input("Enter new name: ")
    
    # Validate age input
    new_age = input("Enter new age: ")
    if not new_age.isdigit():
        print("Invalid input! Age must be a number.")
        return
    new_age = int(new_age)
    
    new_grade = input("Enter new grade: ")
    
    cursor.execute('''UPDATE students SET name = ?, age = ?, grade = ? WHERE student_id = ?''',
                   (new_name, new_age, new_grade, student_id))
    conn.commit()
    print(f"Student with ID {student_id} updated successfully.")

# Function to delete a student
def delete_student():
    create_table_if_needed()  # Ensure the table exists before deleting
    
    student_id = input("Enter student ID to delete: ")
    if not student_id.isdigit():
        print("Invalid input! Student ID must be a number.")
        return
    student_id = int(student_id)

    # Check if the student ID exists
    if not student_exists(student_id):
        print(f"No student found with ID {student_id}. Please check the ID and try again.")
        return
    
    cursor.execute('''DELETE FROM students WHERE student_id = ?''', (student_id,))
    conn.commit()
    print(f"Student with ID {student_id} deleted successfully.")

# Menu function to drive the program
def menu():
    print("\nMenu:")
    print("1. Insert Student")
    print("2. Display Students")
    print("3. Update Student")
    print("4. Delete Student")
    print("5. Exit")

    while True:        

        choice = input("\nEnter your choice: ")

        if choice == '1':
            insert_student()
        elif choice == '2':
            display_students()
        elif choice == '3':
            update_student()
        elif choice == '4':
            delete_student()
        elif choice == '5':
            print("Exiting program...")
            break
        else:
            print("Invalid choice! Please try again.")

# Call the menu function to run the program
if __name__ == '__main__':
    menu()

# Close the connection after the program ends
conn.close()
