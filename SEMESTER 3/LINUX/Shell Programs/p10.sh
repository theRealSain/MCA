echo "Enter the number"
read n
for ((i=1; i<=10; i++));
do
    mul=$(echo "$n * $i" | bc)
    echo "$i * $n = $mul"
done