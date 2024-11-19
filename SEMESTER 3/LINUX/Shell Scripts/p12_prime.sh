echo "Enter the limit: "
read n
echo "Prime numbers from 1 to $n:"

for i in $(seq 2 $n)
do
    flag=0
    for j in $(seq 2 $(($i - 1)))
    do
        if [ $(($i % $j)) -eq 0 ]
        then
            flag=1
            break
        fi
    done
    if [ $flag -eq 0 ]
    then
        echo $i
    fi
done

