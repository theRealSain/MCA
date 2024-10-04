# Set the minimum password length
min_length = 8

# Loop until a valid password is entered
while True:
    password = input("Enter your password: ")
    
    # Check if the password meets the minimum length requirement
    if len(password) >= min_length:
        break
    else:
        print(f"Password must be at least {min_length} characters long. Please try again.")

# Print asterisks equal to the length of the password
print("Password accepted!")
print("*" * len(password))
