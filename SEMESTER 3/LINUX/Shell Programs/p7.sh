echo "Enter the number of employees:" 
read n 
i=1
while [ $i -le $n ]
do 
    echo "Enter the basic salary of employee:" 
    read basic_salary 

    if [ $basic_salary -lt 15000 ] 
    then 
        DA=$(echo "$basic_salary * 90 / 100" | bc)
        HRA=500
        TA=$(echo "$basic_salary * 10 / 100" | bc)
    else 
        DA=$(echo "$basic_salary * 50 / 100" | bc)
        HRA=$(echo "$basic_salary * 15 / 100" | bc)
        TA=1000
    fi 

    gross_salary=$(echo "$basic_salary + $DA + $HRA + $TA" | bc)
    echo "Gross salary of employee: $gross_salary" 

    i=$((i+1))
done

