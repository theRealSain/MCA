echo "enter two numbers"
read a b
sum=$(echo $a + $b | bc)
echo "sum: $sum"
diff=$(echo $a - $b | bc)
echo "difference: $diff"
pro=$(echo $a % $b | bc)
echo "remainder: $pro"
div=$(echo $a / $b | bc)
echo "division: $div"
