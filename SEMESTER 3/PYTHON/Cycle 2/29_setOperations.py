# Step 1: Create two sets representing phonebook entries
phonebook1 = {'John', 'Alice', 'Bob', 'Diana'}
phonebook2 = {'Eve', 'Alice', 'John', 'Sam'}

# Step 2: Perform set operations

# Union - combines all elements from both sets (removes duplicates)
union_set = phonebook1.union(phonebook2)
print("Union of phonebook1 and phonebook2:", union_set)

# Intersection - returns elements that are present in both sets
intersection_set = phonebook1.intersection(phonebook2)
print("Intersection of phonebook1 and phonebook2:", intersection_set)

# Difference - returns elements present in phonebook1 but not in phonebook2
difference_set = phonebook1.difference(phonebook2)
print("Difference of phonebook1 and phonebook2 (phonebook1 - phonebook2):", difference_set)

# Symmetric Difference - returns elements present in either set but not both
symmetric_difference_set = phonebook1.symmetric_difference(phonebook2)
print("Symmetric Difference of phonebook1 and phonebook2:", symmetric_difference_set)
