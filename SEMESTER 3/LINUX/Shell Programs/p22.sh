isPalindrome()
{
    str=$1
    len=${#str}
    flag=1

    for((i=0; i<=len/2; i++)); do
        if [ "${str:$i:1}" != "${str:$(($len-$i-1)):1}" ]; then
            flag=0
            break
        fi
    done

    return $flag
}

echo "Enter a string: "
read str

isPalindrome $str
result=$?

if [ $result -eq 0 ]; then
    echo "Not palindrome"
else
    echo "Palindrome"
fi