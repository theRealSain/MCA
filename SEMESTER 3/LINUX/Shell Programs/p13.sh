echo "Enter number: "
read n
fact=1
sum=0
for((i=1;i<=$n;i++))
do
    fact=$(echo "$fact * $i" | bc -l)
    res=$(echo "$i / $fact" | bc -l)
    sum=$(echo "$sum + $res" | bc -l)
done
echo "Result: $sum"