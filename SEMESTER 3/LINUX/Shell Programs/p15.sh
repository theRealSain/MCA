echo "Enter directory name: "
read dir_name
mkdir "$dir_name"
echo "Directory '$dir_name' created!"

current_dir=$(pwd)
echo "Current directory: $current_dir"

echo "Listing all contents: "
ls -l

echo "Enter filename to copy: "
read src_file
if [ -f "$src_file" ]; then
    echo "Enter destination path: "
    read dest_path
    cp "$src_file" "$dest_path"
    echo "File copied!"
else
    echo "File $src_file does not exist!"
fi

echo "Enter filename to rename: "
read file_name
if [ -f "$file_name" ]; then
    echo "Enter new name: "
    read new_name
    mv "$file_name" "$new_name"
    echo "File renamed!"
else
    echo "File $file_name does not exist!"
fi

echo "Enter file name to write contents: "
read file_name
if [ -f "$file_name" ]; then
    echo "Enter contents: "
    cat >> "$file_name"
    echo "Contents added!"
else
    echo "File $file_name does not exist!"
fi

echo "Enter file name to edit: "
read file_name
if [ -f "$file_name" ]; then
    echo "Opening file: "
    nano "$file_name"
else
    echo "File $file_name does not exist!"
fi