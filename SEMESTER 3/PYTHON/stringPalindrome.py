# Step 1: Read input string from the user
input_string = input("Enter a string: ")

# Step 2: Convert the string to lowercase to make the check case-insensitive
normalized_string = input_string.lower()

# Step 3: Reverse the normalized string
reversed_string = normalized_string[::-1]

# Step 4: Check if the original normalized string is equal to the reversed string
if normalized_string == reversed_string:
    print(f"The string '{input_string}' is a palindrome.")
else:
    print(f"The string '{input_string}' is not a palindrome.")
