# Prompt user for input
echo "Enter Number: "
read n

# Initialize reversed number to 0
num=0

# Reverse the number
while [ $n -gt 0 ]; do
  num=$((num * 10))          # Shift digits left in num
  k=$((n % 10))              # Get the last digit of n
  num=$((num + k))           # Add the last digit to num
  n=$((n / 10))              # Remove the last digit from n
done

# Output the result
echo "Reversed Number is $num"
