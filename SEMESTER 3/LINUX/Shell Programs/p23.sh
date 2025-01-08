for file in *.c; do
    if [ -e "$file" ]; then
        base="${file%.c}"
        mv "$file" "${base}.cpp"
        echo "Renamed to ${base}.cpp"
    else
        echo "not exists"
        break
    fi
done