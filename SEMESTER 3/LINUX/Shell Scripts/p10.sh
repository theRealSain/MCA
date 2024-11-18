echo "enter the number"
read n
for i in `seq 1 1 10`
do
mul=$((n*i))
echo "$i*$n=$mul"
done
