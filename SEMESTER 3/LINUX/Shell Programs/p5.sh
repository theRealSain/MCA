echo "Enter Number : "
read n

temp=$n
sum=0

while [ $n -gt 0 ]; do
    r=$(echo "$n % 10" | bc)
    sum=$(echo "($sum * 10) + $r" | bc)
    n=$((n / 10))
done

if [ $temp -eq $sum ]; then
    echo "Palindrome"
else
    echo "Not Palindrome"
fi