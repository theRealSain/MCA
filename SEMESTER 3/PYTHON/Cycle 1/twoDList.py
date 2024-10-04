# Step 1: Read the dimensions of the 2D list from the user
num_rows = int(input("Enter the number of rows: "))
num_cols = int(input("Enter the number of columns: "))

# Step 2: Initialize the 2D list
matrix = []

# Step 3: Read the elements of the 2D list from the user
print("Enter the elements row-wise (separate elements by space):")

# Loop through the number of rows
for i in range(num_rows):
    # Step 3a: Prompt the user to enter elements for the current row
    row_input = input(f"Enter elements for row {i + 1}: ")
    
    # Step 3b: Split the input string into a list of strings
    row_elements = row_input.split()
    
    # Step 3c: Convert each string element to an integer
    # Create an empty list for the row
    row = []
    for x in row_elements:
        # Convert the string element to an integer
        number = int(x)
        # Append the integer to the row list
        row.append(number)
    
    # Step 3d: Append the row (list of integers) to the matrix
    matrix.append(row)

# Step 4: Calculate and display the row-wise sum
print("Row-wise sums:")

# Loop through each row and its index
for i, row in enumerate(matrix):
    # Step 4a: Calculate the sum of the current row
    row_sum = sum(row)
    
    # Step 4b: Display the sum for the current row
    print(f"Sum of row {i + 1}: {row_sum}")
