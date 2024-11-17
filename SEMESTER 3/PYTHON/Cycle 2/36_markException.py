# Define a custom exception
class InvalidMarkError(Exception):
    def __init__(self, mark):
        super().__init__(f"Invalid mark: {mark}. Marks must be between 0 and 100.")
        self.mark = mark

# Function to get marks and validate
def get_mark():
    try:
        # Read mark from user
        mark = float(input("Enter the mark (0 to 100): "))
        
        # Raise exception if mark is not in the valid range
        if mark < 0 or mark > 100:
            raise InvalidMarkError(mark)
        
        print(f"The entered mark is: {mark}")
    
    except InvalidMarkError as e:
        print(e)
    
    except ValueError:
        print("Please enter a valid number.")

# Call the function to get mark
get_mark()
