echo "Enter a character: "
read -n 1 char
echo

if [[ $char =~ [a-z] ]]; then
    echo "Lowercase"
elif [[ $char =~ [A-Z] ]]; then
    echo "Uppercase"
elif [[ $char =~ [1-9] ]]; then
    echo "Digit"
elif [[ $char =~ [[:punct:]] ]]; then
    echo "Special Character"

else
    echo "Not a character"
fi