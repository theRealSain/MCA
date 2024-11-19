echo "Enter the number:"
read n

fact=1
sum=0

# Loop from 1 to n
for i in $(seq 1 $n)
do
    # Calculate fact = fact * i
    fact=$(echo "$fact * $i" | bc -l)
    
    # Calculate res = i / fact
    res=$(echo "$i / $fact" | bc -l)
    
    # Update the sum
    sum=$(echo "$sum + $res" | bc -l)
done

echo "Result: $sum"

