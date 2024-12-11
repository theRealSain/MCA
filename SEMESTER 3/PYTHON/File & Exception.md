### File Handling in Python

File handling in Python refers to the process of creating, reading, writing, and manipulating files on your computer. Python provides built-in functions and methods for file operations, allowing you to work with various file types (like text files, binary files, etc.) easily. 

### Basic File Operations

Here are the fundamental operations you can perform on files in Python:

1. **Opening a File**: You can open a file using the `open()` function. This function requires the filename and the mode in which you want to open the file.

2. **Reading from a File**: You can read the content of a file using methods such as `read()`, `readline()`, and `readlines()`.

3. **Writing to a File**: You can write content to a file using methods such as `write()` and `writelines()`.

4. **Closing a File**: Always close the file after operations using the `close()` method to free up system resources.

### File Modes

When opening a file, you can specify different modes:

- `'r'`: Read (default mode). Opens a file for reading.
- `'w'`: Write. Opens a file for writing (creates a new file or truncates an existing file).
- `'a'`: Append. Opens a file for appending content.
- `'b'`: Binary mode. Opens a file in binary format (e.g., for images).
- `'x'`: Exclusive creation. Fails if the file already exists.
- `'t'`: Text mode (default mode).

### Example: File Handling in Python

#### 1. Writing to a File

```python
# Writing to a file
with open('example.txt', 'w') as file:
    file.write("Hello, World!\n")
    file.write("This is a file handling example.\n")
```

#### 2. Reading from a File

```python
# Reading from a file
with open('example.txt', 'r') as file:
    content = file.read()
    print(content)
```

**Output:**
```
Hello, World!
This is a file handling example.
```

#### 3. Reading Line by Line

```python
# Reading line by line
with open('example.txt', 'r') as file:
    for line in file:
        print(line.strip())  # Use strip() to remove newline characters
```

#### 4. Appending to a File

```python
# Appending to a file
with open('example.txt', 'a') as file:
    file.write("Adding more content to the file.\n")
```

#### 5. Reading All Lines into a List

```python
# Reading all lines into a list
with open('example.txt', 'r') as file:
    lines = file.readlines()
    print(lines)
```

### Using `with` Statement

Using the `with` statement is a good practice when working with files. It automatically handles closing the file for you, even if an error occurs during file operations.

### Handling Exceptions

You can use `try` and `except` blocks to handle exceptions that may occur during file operations, such as trying to open a file that does not exist.

```python
try:
    with open('non_existent_file.txt', 'r') as file:
        content = file.read()
except FileNotFoundError:
    print("The file does not exist.")
```

--- 


## Exception Handling in Python
* try:
```python
    #Code that may raise an exception
    num = int(input("Enter a number: "))
    result = 10 / num
    print(f"Result: {result}")
```

* except ValueError:
```python
    # Handle ValueError (e.g., invalid input)
    print("Invalid input! Please enter a valid integer.")
```

* except ZeroDivisionError:
```python
    # Handle ZeroDivisionError (division by zero)
    print("Error! You can't divide by zero.")
```

* except Exception as e:
```python
    # Handle any other exception
    print(f"An error occurred: {e}")
```

* else:
```python
    # This block executes if no exceptions were raised
    print("The operation completed successfully.")
```

* finally:
```python
    # This block always executes, regardless of exceptions
    print("Execution finished.")
```

### Key Points:
* try: Block where you write code that may raise exceptions.
* except: Block to handle specific exceptions.
* else: Optional block that runs if no exceptions occur.
* finally: Block that always runs after try/except, regardless of the outcome.
___



## import sqlite3
```python
# Connect to a database (or create one if it doesn't exist)
conn = sqlite3.connect('example.db')

# Create a cursor object to interact with the database
cursor = conn.cursor()

# Create a table
cursor.execute('''
CREATE TABLE IF NOT EXISTS users (
    id INTEGER PRIMARY KEY,
    name TEXT NOT NULL,
    age INTEGER NOT NULL
)
''')

# Insert data into the table
cursor.execute('''
INSERT INTO users (name, age) VALUES (?, ?)
''', ('Alice', 30))

cursor.execute('''
INSERT INTO users (name, age) VALUES (?, ?)
''', ('Bob', 25))

# Commit the changes
conn.commit()

# Query the database
cursor.execute('SELECT * FROM users')
rows = cursor.fetchall()

# Display the results
for row in rows:
    print(row)

# Update a record
cursor.execute('''
UPDATE users SET age = ? WHERE name = ?
''', (31, 'Alice'))

# Delete a record
cursor.execute('''
DELETE FROM users WHERE name = ?
''', ('Bob',))

# Commit the changes
conn.commit()

# Close the connection
conn.close()
```



### Common SQL Commands
*	CREATE TABLE: Create a new table.
*	INSERT INTO: Insert new records into a table.
*	SELECT: Retrieve records from a table.
*	UPDATE: Modify existing records.
*	DELETE: Remove records from a table.
*	DROP TABLE: Delete a table from the database.
___


# Introduction to Classes in Python
Classes are blueprints for creating objects (instances) that bundle data (attributes) and functionality (methods) together. This is a fundamental concept in object-oriented programming.

```python
class Dog:
    # Class attribute
    species = "Canis familiaris"

    def __init__(self, name, age):
        # Instance attributes
        self.name = name
        self.age = age

    def bark(self):
        return f"{self.name} says woof!"

    def get_age(self):
        return f"{self.name} is {self.age} years old."

# Creating instances (objects) of the Dog class
dog1 = Dog("Buddy", 3)
dog2 = Dog("Max", 5)

# Accessing instance methods and attributes
print(dog1.bark())          # Output: Buddy says woof!
print(dog1.get_age())       # Output: Buddy is 3 years old.
print(dog2.bark())          # Output: Max says woof!
print(dog2.get_age())       # Output: Max is 5 years old.

# Accessing class attribute
print(Dog.species)          # Output: Canis familiaris
print(dog1.species)         # Output: Canis familiaris (access via instance)
```

Key Concepts
*	Class Definition:
    -	Defined using the class keyword followed by the class name(PascalCase).
*	Constructor (__init__ method):
    -	Initializes instance attributes and is called automatically when a new object of the class is created.
*	Instance Attributes:
    -	Unique to each object (instance) and are defined using self.
*	Methods:
    -	Functions defined within a class that operate on instance attributes.
    -	Can be instance methods, class methods (using @classmethod), or static methods (using @staticmethod).
*	Class Attributes:
    -	Shared among all instances of the class and are defined directly inside the class.

### What is self :
In Python, self is a conventional name used for the first parameter of instance methods in a class. It refers to the instance of the class itself and is used to access instance attributes and methods within the class. Here’s a breakdown of what self is and how it works:

### Key Points about self
1.	Reference to the Instance:
    -	self allows you to refer to instance variables and methods from within class methods. It is not a keyword in Python but a naming convention. You could technically name it anything, but using self is the standard practice.
2.	Accessing Instance Attributes:
    -	You can use self to access attributes that are associated with the specific instance of the class.
3.	Distinguishing Between Instance Variables and Local Variables:
    -	Using self helps distinguish between instance variables (attributes of the object) and local variables within methods.
4.	Not Automatically Passed:
    -	When you call a method on an instance of a class, Python automatically passes the instance as the first argument to the method. You don’t need to include it in the method call.

```python
class Dog:
    def __init__(self, name, age):
        self.name = name  # Instance variable
        self.age = age    # Instance variable

    def bark(self):
        return f"{self.name} says woof!"

    def get_age(self):
        return f"{self.name} is {self.age} years old."

# Create an instance of the Dog class
my_dog = Dog("Buddy", 4)

# Accessing methods
print(my_dog.bark())         # Output: Buddy says woof!
print(my_dog.get_age())      # Output: Buddy is 4 years old.
```

