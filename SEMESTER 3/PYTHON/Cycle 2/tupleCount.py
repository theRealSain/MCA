# Step 1: Create a tuple with some integer values
numbers_tuple = (3, 5, 1, 3, 7, 3, 8, 2, 5, 5, 3)

# Step 2: Initialize a variable to store the element with the highest count
most_frequent_element = None

# Step 3: Find the element with the maximum count using a for loop
highest_count = 0
for num in numbers_tuple:
    current_count = numbers_tuple.count(num)  # Count the occurrences of each number
    if current_count > highest_count:
        highest_count = current_count
        most_frequent_element = num

# Step 4: Print the result
print(f"The element with the highest count is: {most_frequent_element} (occurs {highest_count} times)")
