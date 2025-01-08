factorial()
{
    n=$1
    fact=1
    for ((i=1; i<=n; i++)); do
        fact=$((fact * i))
    done
    echo $fact
}

echo "Enter a number: "
read n

if [ $n -lt 0 ]; then
    echo "Negative!"
else
    result=$(factorial $n)
    echo "Factorial of $n is: $result"
fi