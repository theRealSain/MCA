echo "Enter the cost price of the item: " 
read cost_price 

echo "Enter the selling price of the item: " 
read selling_price 

if [ $cost_price -gt $selling_price ] 
then 
    loss=$((cost_price - selling_price)) 
    echo "You have incurred a loss of $loss" 
elif [ $cost_price -lt $selling_price ] 
then 
    profit=$((selling_price - cost_price)) 
    echo "You have made a profit of $profit" 
else 
    echo "You have neither made a profit nor incurred a loss." 
fi
