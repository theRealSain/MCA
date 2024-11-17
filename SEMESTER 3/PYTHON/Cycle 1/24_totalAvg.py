# Step 1: Initialize the multidimensional list
matrix = [[3, 4, 6], [1, 5, 7], [2, 8, 0]]

# Step 2: Iterate through each row of the list
for i in range(len(matrix)):
    row = matrix[i]
    
    # Step 3: Calculate the total (sum) and average of the elements in each row
    row_total = sum(row)
    row_average = row_total / len(row)
    
    # Step 4: Print the row-wise total and average
    print(f"Row {i+1} total: {row_total}")
    print(f"Row {i+1} average: {row_average:.2f}")
