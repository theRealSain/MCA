import sqlite3

conn = sqlite3.connect('student.db')
cursor = conn.cursor()

# Function to create the students table
def create():
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS students (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            name TEXT NOT NULL,
            age INTEGER NOT NULL,
            grade TEXT NOT NULL
        )
    ''')
    print("Table created!")

# Function to insert a new record into the students table
def insert():
    name = input("Enter name: ")
    age = int(input("Enter age: "))  # Convert input to integer
    grade = input("Enter grade: ")

    cursor.execute('INSERT INTO students (name, age, grade) VALUES (?, ?, ?)', (name, age, grade))
    conn.commit()
    print("Record inserted successfully!")

# Function to select all records from the students table
def select():
    cursor.execute('SELECT * FROM students')
    rows = cursor.fetchall()
    print("Records:")
    for row in rows:
        print(row)

# Function to update a student's name by ID
def update():
    id = int(input("Enter student ID to update: "))  # Get student ID
    name = input("Enter new name: ")  # Get new name

    cursor.execute('UPDATE students SET name = ? WHERE id = ?', (name, id))
    conn.commit()
    print(f"Record with ID {id} updated!")

# Function to delete a student record by ID
def delete():
    id = int(input("Enter student ID to delete: "))  # Get student ID

    cursor.execute('DELETE FROM students WHERE id = ?', (id,))
    conn.commit()
    print(f"Record with ID {id} deleted!")

# Create the table if it doesn't exist
create()

# Endless loop to keep the program running
while True:
    print("\n1. Insert\n2. Update\n3. Delete\n4. Display\n5. Exit")
    ch = int(input("Enter choice: "))  # Get choice and convert to integer

    if ch == 1:
        insert()
    elif ch == 2:
        update()
    elif ch == 3:
        delete()
    elif ch == 4:
        select()
    elif ch == 5:
        print("Exiting the program...")
        break  # Exit the loop and the program
    else:
        print("Invalid choice! Please try again.")

# Close the connection when done
conn.close()
