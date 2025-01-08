echo "Enter a file name: "
read file_name

if [ -w "$file_name" ]; then
    echo "This file has write permission!"

    echo "Append contents: "
    cat >> "$file_name"
    echo "Text appended!"
else
    echo "This file has no write permission!"
fi