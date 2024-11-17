# Create a string with the value "Hello World"
s = "Hello World"

# i) s[5] - Find the character at index 5
char_at_index_5 = s[5]

# ii) s[0:2] - Find the substring from index 0 up to (but not including) index 2
substring_0_to_2 = s[0:2]

# iii) s[1:] - Find the substring starting from index 1 to the end of the string
substring_from_1_onwards = s[1:]

# iv) s[:2] - Find the substring from the start up to (but not including) index 2
substring_up_to_2 = s[:2]

# v) s[0:-2] - Find the substring from index 0 up to (but not including) the second last character
substring_0_to_minus_2 = s[0:-2]

# vi) s[-3:0] - Find the substring from the third last character up to (but not including) index 0
substring_minus_3_to_0 = s[-3:0]

# Print the results
print(f"i) s[5]: {char_at_index_5}")
print(f"ii) s[0:2]: '{substring_0_to_2}'")
print(f"iii) s[1:]: '{substring_from_1_onwards}'")
print(f"iv) s[:2]: '{substring_up_to_2}'")
print(f"v) s[0:-2]: '{substring_0_to_minus_2}'")
print(f"vi) s[-3:0]: '{substring_minus_3_to_0}'")
