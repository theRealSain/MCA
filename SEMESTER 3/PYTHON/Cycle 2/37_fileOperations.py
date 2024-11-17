# Step 1: Create and write to the file
file_name = 'test.txt'

# Create the file and write the initial content
with open(file_name, 'w') as file:
    file.write("Hello Programmer, Welcome to python tutorial\n")

# Step 2: Append a new line to the file
with open(file_name, 'a') as file:
    file.write("Have a great learning experience\n")

# Step 3: Read file content line by line
print("File content line by line:")
with open(file_name, 'r') as file:
    for line in file:
        print(line.strip())  # Use strip() to remove extra newline characters

# Step 4: Read five characters from the file
with open(file_name, 'r') as file:
    five_characters = file.read(5)  # Read first five characters
    print("\nFirst five characters from the file:")
    print(five_characters)
