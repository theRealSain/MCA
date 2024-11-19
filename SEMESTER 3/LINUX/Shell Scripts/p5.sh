# Prompt user for input
echo "Enter Number: "
read num

# Initialize variables
s=0
rev=0
temp=$num

# Reverse the number
while [ $num -gt 0 ]; do
  s=$((num % 10))          # Get the last digit
  rev=$((rev * 10 + s))    # Build the reversed number
  num=$((num / 10))        # Remove the last digit
done

# Check if the original number and reversed number are the same
if [ $temp -eq $rev ]; then
  echo "Number is a palindrome"
else
  echo "Number is not a palindrome"
fi
