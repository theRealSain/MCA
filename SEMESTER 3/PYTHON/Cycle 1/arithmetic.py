# Read two integers from the user
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

# Addition
addition = a + b
print(f"Addition: {a} + {b} = {addition}")

# Subtraction
subtraction = a - b
print(f"Subtraction: {a} - {b} = {subtraction}")

# Multiplication
multiplication = a * b
print(f"Multiplication: {a} * {b} = {multiplication}")

# Division
if b != 0:
    division = a / b
    print(f"Division: {a} / {b} = {division}")
else:
    print("Division: Division by zero is not allowed")

# Integer Division
if b != 0:
    integer_division = a // b
    print(f"Integer Division: {a} // {b} = {integer_division}")
else:
    print("Integer Division: Division by zero is not allowed")

# Modulus
if b != 0:
    modulus = a % b
    print(f"Modulus: {a} % {b} = {modulus}")
else:
    print("Modulus: Division by zero is not allowed")

# Exponential Operation
exponential = a ** b
print(f"Exponential: {a} ** {b} = {exponential}")
