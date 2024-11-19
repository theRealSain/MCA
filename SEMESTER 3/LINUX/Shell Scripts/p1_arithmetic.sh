echo "Enter two numbers"
read a b

sum=$(echo "$a + $b" | bc)
echo "Sum: $sum"

diff=$(echo "$a - $b" | bc)
echo "Difference: $diff"

pro=$(echo "$a % $b" | bc)
echo "Remainder: $pro"

div=$(echo "scale=2; $a / $b" | bc)
echo "Division: $div"
