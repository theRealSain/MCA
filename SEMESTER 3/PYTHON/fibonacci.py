# Set the number of terms in the Fibonacci series
n_terms = int(input("Enter the number of terms in the Fibonacci series: "))

# Initialize the first two terms of the series
first = 0
second = 1

# Print the first two terms
print(first)
print(second)

# Generate the remaining Fibonacci numbers
for i in range(2, n_terms):
    next_term = first + second
    print(next_term)
    first = second
    second = next_term
