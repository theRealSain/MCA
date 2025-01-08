echo "Enter the cost price: "
read cost
echo "Enter the selling price: "
read sell

if [ $cost -lt $sell ]; then
    prof=$(echo "$sell - $cost" | bc)
    echo "Profit: $prof"
elif [ $cost -gt $sell ]; then
    loss=$(echo "$cost - $sell" | bc)
    echo "Loss: $loss"
else
    echo "No profit or loss!"
fi