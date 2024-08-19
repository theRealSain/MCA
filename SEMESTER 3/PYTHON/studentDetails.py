# Read student details
name = input("Enter student name: ")
roll_no = input("Enter roll number: ")
internal_mark = float(input("Enter internal mark: "))
external_mark = float(input("Enter external mark: "))

# Compute total marks
total_marks = internal_mark + external_mark

# Compute grace marks (5% of total marks)
grace_marks = (5 / 100) * total_marks

# Compute final marks
final_marks = total_marks + grace_marks

# Display details
print("\nStudent Details:")
print(f"Name           : {name}")
print(f"Roll Number    : {roll_no}")
print(f"Internal Mark  : {internal_mark}")
print(f"External Mark  : {external_mark}")
print(f"Grace Marks    : {grace_marks}")
print(f"Final Marks    : {final_marks}")
