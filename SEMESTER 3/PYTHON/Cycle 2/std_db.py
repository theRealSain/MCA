import sqlite3

# Step 1: Connect to the database (creates if it doesn't exist)
conn = sqlite3.connect('student.db')

# Step 2: Create a cursor object to interact with the database
cursor = conn.cursor()

# Step 3: Create a table named 'students'
def create_table():
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS students (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            name TEXT NOT NULL,
            age INTEGER NOT NULL,
            grade TEXT NOT NULL
        )
    ''')
    print("Table created successfully.")

# Step 4: Insert records into the students table
def insert_records():
    students = [
        ('Alice', 20, 'A'),
        ('Bob', 22, 'B'),
        ('Charlie', 21, 'C')
    ]
    cursor.executemany('INSERT INTO students (name, age, grade) VALUES (?, ?, ?)', students)
    conn.commit()  # Commit the changes
    print("Records inserted successfully.")

# Step 5: Select and display records from the students table
def select_records():
    cursor.execute('SELECT * FROM students')
    rows = cursor.fetchall()
    print("Records in the students table:")
    for row in rows:
        print(row)

# Step 6: Update a record in the students table
def update_record(student_id, new_name):
    cursor.execute('UPDATE students SET name = ? WHERE id = ?', (new_name, student_id))
    conn.commit()  # Commit the changes
    print(f"Record with ID {student_id} updated successfully.")

# Step 7: Delete a record from the students table
def delete_record(student_id):
    cursor.execute('DELETE FROM students WHERE id = ?', (student_id,))
    conn.commit()  # Commit the changes
    print(f"Record with ID {student_id} deleted successfully.")

# Step 8: Execute all operations
create_table()
insert_records()
select_records()

# Update record: changing Bob's name to Robert (assuming Bob has ID 2)
update_record(2, 'Robert')
select_records()

# Delete record: deleting Alice (assuming Alice has ID 1)
delete_record(1)
select_records()

# Step 9: Close the database connection
conn.close()
