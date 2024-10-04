# Read the input string from the user
input_string = input("Enter a string containing numbers separated by '+': ")

# Split the string into a list of numbers (as strings)
numbers = input_string.split('+')

# Step 1: Initialize a variable to store the cumulative sum of numbers
sum_of_numbers = 0

# Step 2: Iterate over each element (string) in the numbers list
for i in numbers:
    # Step 3: Convert the current element from a string to an integer
    current_number = int(i)
    
    # Step 4: Add the current number to the cumulative sum
    sum_of_numbers += current_number

# Step 5: Print the final sum of the numbers
print(f"The sum of the numbers is: {sum_of_numbers}")
