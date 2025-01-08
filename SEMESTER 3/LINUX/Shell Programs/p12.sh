echo "Enter the value of n: "
read n

echo "Prime numbers from 1 to $n are:"

for ((num=2; num<=n; num++)); do
    is_prime=1
    if [ $num -le 1 ]; then
        is_prime=0
    else
        for ((i=2; i*i<=num; i++)); do
            if [ $(($num % $i)) -eq 0 ]; then
                is_prime=0
                break
            fi
        done
    fi

    if [ $is_prime -eq 1 ]; then
        echo $num
    fi
done