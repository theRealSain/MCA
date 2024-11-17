try:
    # Example that could raise a TypeError
    num = 5 + "10"  # This will raise a TypeError

    # Example that could raise an IndexError
    my_list = [1, 2, 3]
    print(my_list[5])  # This will raise an IndexError

except TypeError:
    print("Caught a TypeError: You tried to perform an operation on incompatible data types.")

except IndexError:
    print("Caught an IndexError: You tried to access an index that is out of range.")

except Exception as e:
    print(f"An unexpected exception occurred: {e}")
