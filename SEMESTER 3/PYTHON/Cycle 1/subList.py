# Function to generate a sublist of odd numbers
def odd(numbers):
    odd_sublist = []
    for num in numbers:
        if num % 2 != 0:  # Check if the number is odd
            odd_sublist.append(num)
    return odd_sublist

# Function to generate a sublist of even numbers
def even(numbers):
    even_sublist = []
    for num in numbers:
        if num % 2 == 0:  # Check if the number is even
            even_sublist.append(num)
    return even_sublist

# Main program
if __name__ == "__main__":
    # Step 1: Read a list of 10 integers from the user
    numbers = []
    print("Enter 10 integers:")
    for i in range(10):
        num = int(input(f"Enter integer {i + 1}: "))
        numbers.append(num)
    
    # Step 2: Generate sublists using the defined functions
    odd_numbers = odd(numbers)
    even_numbers = even(numbers)
    
    # Step 3: Display each list
    print(f"Odd numbers list: {odd_numbers}")
    print(f"Even numbers list: {even_numbers}")
    
    # Step 4: Calculate and display the results
    if odd_numbers:  # Check if the list is not empty
        sum_of_odd = sum(odd_numbers)
        print(f"The sum of odd numbers: {sum_of_odd}")
    else:
        print("No odd numbers found.")
    
    if even_numbers:  # Check if the list is not empty
        max_of_even = max(even_numbers)
        print(f"The maximum of even numbers: {max_of_even}")
    else:
        print("No even numbers found.")
