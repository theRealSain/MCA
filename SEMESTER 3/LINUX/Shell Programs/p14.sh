echo "Enter year: "
read year
if [ $((year%400)) -eq 0 -o $((year%4)) -eq 0 ]
then
    echo "Leap Year"
else
    echo "Not Leap Year"
fi