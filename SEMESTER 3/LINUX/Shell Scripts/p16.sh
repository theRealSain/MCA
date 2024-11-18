#!/bin/bash

# Display the menu options
echo "Menu:"
echo "1. Contents of /etc/passwd"
echo "2. List of output of 'who'"
echo "3. Present working directory"
echo "4. Exit"

while true; do
    
    echo "\n"
    # Prompt for user input
    read -p "Enter your choice (1/2/3/4): " choice
    
    # Check user input and execute corresponding action
    if [ "$choice" -eq 1 ]; then
        # Display contents of /etc/passwd
        cat /etc/passwd
    elif [ "$choice" -eq 2 ]; then
        # Display output of 'who'
        who
    elif [ "$choice" -eq 3 ]; then
        # Display current working directory
        pwd
    elif [ "$choice" -eq 4 ]; then
        # Exit the program
        echo "Exiting the program."
        break
    else
        # Handle invalid input
        echo "Invalid choice. Please try again."
    fi
done

