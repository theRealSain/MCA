def is_palindrome(s):
    # Remove spaces and convert to lowercase for uniformity
    s = s.replace(" ", "").lower()
    length = len(s)

    # Compare characters from the start and end
    for i in range(length // 2):
        if s[i] != s[length - i - 1]:
            return False
    return True

# Test the function
test_string = "radar"
if is_palindrome(test_string):
    print(f'"{test_string}" is a palindrome.')
else:
    print(f'"{test_string}" is not a palindrome.')
