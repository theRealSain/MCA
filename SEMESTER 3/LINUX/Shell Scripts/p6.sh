echo "enter digit number" 
read num 
c=1 
 
echo "odd numbers" 

while [ $c -le 5 ] 
do 
d= echo $num| cut -c $c 
echo $d 
c=$((c+2)) 
done
