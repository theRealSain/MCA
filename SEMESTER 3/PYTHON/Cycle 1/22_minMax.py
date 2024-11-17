# Step 1: Initialize an empty list
elements = []

# Step 2: Read the number of elements to be added from the user
num_elements = int(input("Enter the number of elements you want to add to the list: "))

# Step 3: Use a loop to read each element from the user and append it to the list
for i in range(num_elements):
    element = int(input(f"Enter element {i+1}: "))
    elements.append(element)  # Append the element to the list

# Step 4: Calculate the sum, minimum, and maximum of the list
sum_of_elements = sum(elements)
min_element = min(elements)
max_element = max(elements)

# Step 5: Print the results
print(f"The list of elements: {elements}")
print(f"Sum of elements: {sum_of_elements}")
print(f"Minimum element: {min_element}")
print(f"Maximum element: {max_element}")
