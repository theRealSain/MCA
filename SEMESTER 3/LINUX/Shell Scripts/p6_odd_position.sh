# Prompt the user to enter a number
echo "Enter digit number:"
read num

# Initialize counter
c=1

# Display message
echo "Odd-positioned digits:"

# Loop to extract and print odd-positioned digits
while [ $c -le ${#num} ]; do
  # Extract the character at the c-th position using cut
  d=$(echo "$num" | cut -c $c)
  
  # Print the extracted digit
  echo $d
  
  # Increment counter by 2 to move to the next odd position
  c=$((c + 2))
done
