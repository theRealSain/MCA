echo "1. Contents of /etc/passwd"
echo "2. List of users logged in"
echo "3. Present working directory"
echo "4. Exit"

while true
do
    echo "Your choice: "
    read ch

    case $ch in
        1)
            echo "Contents of cat/etc/passwd: "
            cat/etc/passwd
            ;;
        2) 
            echo "Users logged in: "
            who
            ;;
        3) 
            echo "Current working directory: "
            pwd;;
        4) 
            echo "Exiting! "
            exit
            ;;
        *)
            echo "Invalid!"
            ;;
    esac
done



