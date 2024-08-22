import random

# Step 1: Generate 50 random numbers between 1 and 100
random_numbers = []
for _ in range(50):
    number = random.randrange(1, 101)
    random_numbers.append(number)

# Step 2: Display the randomly generated numbers
print("Randomly generated numbers:")
print(random_numbers)

# Step 3: Filter out the odd numbers
odd_numbers = []
for number in random_numbers:
    if number % 2 != 0:
        odd_numbers.append(number)

# Step 4: Display the odd numbers
print("Odd numbers from the list:")
print(odd_numbers)

# Step 5: Calculate the sum of odd numbers
sum_of_odd_numbers = sum(odd_numbers)

# Step 6: Display the sum of the odd numbers
print(f"The sum of the odd numbers is: {sum_of_odd_numbers}")
