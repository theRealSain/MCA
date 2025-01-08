echo "Enter number of students: "
read n

for ((i=1; i<=n; i++)); do
    echo "Mark 1: "
    read m1
    echo "Mark 2: "
    read m2
    echo "Mark 3: "
    read m3
    echo "Mark 4: "
    read m4
    echo "Mark 5: "
    read m5

    total=$(echo "$m1 + $m2 + $m3 + $m4 + $m5" | bc)
    perc=$(echo "scale=2; ($total / 500) * 100" | bc)

    if [ $(echo "$perc >= 90" | bc) -eq 1 ]; then
        echo "Distinction!"
    elif [ $(echo "$perc >= 70" | bc) -eq 1 ] && [ $(echo "$perc < 90" | bc) -eq 1 ]; then
        echo "First class!"
    elif [ $(echo "$perc >= 60" | bc) -eq 1 ] && [ $(echo "$perc < 70" | bc) -eq 1 ]; then
        echo "Second class!"
    elif [ $(echo "$perc >= 50" | bc) -eq 1 ] && [ $(echo "$perc < 60" | bc) -eq 1 ]; then
        echo "Third class!"
    else
        echo "Failed!"
    fi

    echo "Percentage: $perc"
done