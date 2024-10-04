echo "Enter a pattern to be searched: "
read pname
echo "Enter file to be used: "
read fname

echo "Searching for '$pname' in '$fname'"
grep "$pname" "$fname"

echo "Selected records shown above"
