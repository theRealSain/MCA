while True:
    # Display the menu
    print("\nMenu:")
    print("a. Find the length of the name")
    print("b. Check whether the name contains a substring")
    print("c. Capitalize the name")
    print("d. Find the count of a substring from the name")
    print("e. Display the name concatenated with ‘MCA’ at the start")
    print("f. Exit")

    # Read the user's choice
    choice = input("Enter your choice (a/b/c/d/e/f): ").lower()

    # Execute based on the user's choice
    if choice == 'a':
        name = input("Enter the name: ")
        length_of_name = len(name)
        print(f"The length of the name is: {length_of_name}")

    elif choice == 'b':
        name = input("Enter the name: ")
        substring = input("Enter the substring to check: ")
        if substring in name:
            print(f"Yes, the name contains the substring '{substring}'.")
        else:
            print(f"No, the name does not contain the substring '{substring}'.")

    elif choice == 'c':
        name = input("Enter the name: ")
        capitalized_name = name.capitalize()
        print(f"The capitalized name is: {capitalized_name}")

    elif choice == 'd':
        name = input("Enter the name: ")
        substring = input("Enter the substring to count: ")
        substring_count = name.count(substring)
        print(f"The substring '{substring}' occurs {substring_count} time(s) in the name.")

    elif choice == 'e':
        name = input("Enter the name: ")
        concatenated_name = 'MCA ' + name
        print(f"The name with 'MCA' at the start is: {concatenated_name}")

    elif choice == 'f':
        print("Exiting the program. Goodbye!")
        break

    else:
        print("Invalid choice! Please select a valid option (a/b/c/d/e/f).")
