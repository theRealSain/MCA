#!/bin/bash

while true; do
    # Display menu
    echo "\nSelect an operation:"
    echo "1. Display file contents"
    echo "2. List files in current directory"
    echo "3. Make a directory"
    echo "4. Copy a file"
    echo "5. Rename a file"
    echo "6. Delete a file"
    echo "7. Edit a file"
    echo "8. Exit"

    # Read user input
    read choice

    # Process user input without functions or switch
    if [ "$choice" -eq 1 ]; then
        # Display file contents
        echo "Enter the filename to display its contents:"
        read filename
        if [ -f "$filename" ]; then
            cat "$filename"
        else
            echo "File '$filename' does not exist."
        fi

    elif [ "$choice" -eq 2 ]; then
        # List files in the current directory
        echo "Listing files in the current directory:"
        ls -l

    elif [ "$choice" -eq 3 ]; then
        # Make a directory
        echo "Enter the directory name to create:"
        read dir_name
        mkdir "$dir_name"
        echo "Directory '$dir_name' created."

    elif [ "$choice" -eq 4 ]; then
        # Copy a file
        echo "Enter the source file to copy:"
        read source_file
        if [ -f "$source_file" ]; then
            echo "Enter the destination file name:"
            read destination_file
            cp "$source_file" "$destination_file"
            echo "File '$source_file' copied to '$destination_file'."
        else
            echo "File '$source_file' does not exist."
        fi

    elif [ "$choice" -eq 5 ]; then
        # Rename a file
        echo "Enter the file to rename:"
        read old_name
        if [ -f "$old_name" ]; then
            echo "Enter the new name for the file:"
            read new_name
            mv "$old_name" "$new_name"
            echo "File renamed from '$old_name' to '$new_name'."
        else
            echo "File '$old_name' does not exist."
        fi

    elif [ "$choice" -eq 6 ]; then
        # Delete a file
        echo "Enter the file to delete:"
        read filename
        if [ -f "$filename" ]; then
            rm "$filename"
            echo "File '$filename' deleted."
        else
            echo "File '$filename' does not exist."
        fi

    elif [ "$choice" -eq 7 ]; then
        # Edit a file
        echo "Enter the file to edit (using nano):"
        read filename
        if [ -f "$filename" ]; then
            nano "$filename"  # Opens the file in nano editor
        else
            echo "File '$filename' does not exist."
        fi

    elif [ "$choice" -eq 8 ]; then
        # Exit the script
        echo "Exiting the script."
        exit 0

    else
        echo "Invalid choice. Please enter a valid option."
    fi
done

