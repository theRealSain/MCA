# Step 1: Input a string from the user
name = input("Enter a string: ")

# Step 2: Input a substring from the user
substring = input("Enter a substring to search for: ")

# Step 3: Use the 'in' operator to check if the substring is present in the string
if substring in name:
    print(f"The substring '{substring}' is present in the string '{name}'.")
else:
    print(f"The substring '{substring}' is not present in the string '{name}'.")
