echo "Enter the number of students" 
read n 

for i in `seq 1 1 $n` 
do 
    echo "Enter first subject mark" 
    read m1 
    echo "Enter second subject mark" 
    read m2 
    echo "Enter third subject mark" 
    read m3 
    echo "Enter fourth subject mark" 
    read m4 
    echo "Enter fifth subject mark" 
    read m5 

    total=$(($m1 + $m2 + $m3 + $m4 + $m5)) 
    perc=$(($total / 5)) 

    if [ $perc -ge 80 ] 
    then 
        echo "Distinction" 
    elif [ $perc -ge 60 -a $perc -lt 80 ] 
    then 
        echo "First class" 
    elif [ $perc -ge 50 -a $perc -lt 60 ] 
    then 
        echo "Second Class" 
    else 
        echo "Failed" 
    fi 
done
