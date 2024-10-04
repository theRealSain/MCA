# Step 1: Import the math module
import math

# Step 2: Read the input number from the user
num = float(input("Enter a number: "))

# Step 3: Find the absolute value of the number using abs()
absolute_value = abs(num)

# Step 4: Find the square root of the absolute value using math.sqrt()
square_root = math.sqrt(absolute_value)

# Step 5: Print the results
print(f"The absolute value of {num} is: {absolute_value}")
print(f"The square root of {absolute_value} is: {square_root}")
