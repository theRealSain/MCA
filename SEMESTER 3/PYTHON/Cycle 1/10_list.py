# Creating the initial list
pets = ['dog', 'cat', 'goldfish', 'goat', 'cow']

# i. Find length of the list
length_of_list = len(pets)
print(f"Length of the list: {length_of_list}")

# ii. Concatenate the list to itself
concatenated_list = pets + pets
print(f"Concatenated list: {concatenated_list}")

# iii. Find the 3rd element of the list (index 2 since indexing starts from 0)
third_element = pets[2]
print(f"3rd element of the list: {third_element}")

# iv. Append a new item ‘bird’ to the list
pets.append('bird')
print(f"List after appending 'bird': {pets}")

# v. Find the number of times 'dog' is repeated in the list
dog_count = pets.count('dog')
print(f"Number of times 'dog' is repeated: {dog_count}")

# vi. Find the reverse of the list
reversed_list = pets[::-1]
print(f"Reversed list: {reversed_list}")

# vii. Pop out an element from the list (by default, the last element)
popped_element = pets.pop()
print(f"Popped element: {popped_element}")
print(f"List after popping an element: {pets}")
