echo "enter the number " 
read n 
sum=0 
 
while [ $n -gt 0 ]; do
    r=$(echo "$n % 10" | bc) 
    sum=$(echo "$sum + $r" | bc) 
    n=$((n / 10)) 
done
echo "Sum is $sum"
