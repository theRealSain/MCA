# Prompt user for a number
echo "Enter the number:"
read n

# Initialize sum variable
sum=0

# Loop to calculate the sum of digits
while [ $n -gt 0 ]; do
  mod=$((n % 10))  # Get the last digit
  sum=$((sum + mod))  # Add the digit to the sum
  n=$((n / 10))  # Remove the last digit
done

# Display the result
echo "Sum of the digits: $sum"
