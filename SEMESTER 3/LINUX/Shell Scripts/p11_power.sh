echo "Enter the number"
read num
echo "Enter the power"
read pow

count=0
res=1

while [ $count -ne $pow ]
do
    res=$(($res * $num))
    count=$(($count + 1))
done

echo "$num^$pow is: $res"
