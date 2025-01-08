echo "Enter number: "
read num
echo "Enter power: "
read pow

count=0
res=1

while [ $count -ne $pow ]
do
    res=$(($res*$num))
    count=$(($count+1))
done
echo "$num^$pow is: $res"

# Using bc for exponentiation
result=$(echo "$num ^ $pow" | bc)
echo "Using bc: $num^$pow is: $result"