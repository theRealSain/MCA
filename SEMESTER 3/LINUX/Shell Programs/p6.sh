echo "Enter a number: "
read n

c=1

echo "Odd positioned digits: "

while [ $c -le ${#n} ]; do
    d=$(echo "$n" | cut -c $c)
    echo $d
    c=$(echo "$c + 2" | bc)
done