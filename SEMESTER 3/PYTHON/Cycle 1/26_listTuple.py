# Step 1: Define a list of numbers with both positive and negative values
numbers = [10, -4, 15, -3, 0, 8, -9, 20, -11]

# Step 2: Initialize an empty list to store positive numbers
positive_numbers = []

# Step 2 (expanded): Use a for loop to iterate through each number in the list
for num in numbers:
    # Check if the number is positive
    if num > 0:
        # If positive, append it to the positive_numbers list
        positive_numbers.append(num)

# Step 3: Convert the filtered list to a tuple
positive_tuple = tuple(positive_numbers)

# Step 4: Print the tuple containing only positive values
print("Tuple with only positive values:", positive_tuple)
