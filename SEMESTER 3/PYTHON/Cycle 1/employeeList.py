# Initial list of employee names
employees = ['Kiran', 'Rahul', 'Lakshmi', 'Priya', 'Rahul']

# i. Check the number of times the employee name 'Rahul' is present in the list
rahul_count = employees.count('Rahul')
print(f"Number of times 'Rahul' is present in the list: {rahul_count}")

# ii. Remove the employee 'Priya' from the list
if 'Priya' in employees:
    employees.remove('Priya')
print(f"List after removing 'Priya': {employees}")

# iii. Add a new employee name 'Raghav' to the beginning of the list
employees.insert(0, 'Raghav')
print(f"List after adding 'Raghav' to the beginning: {employees}")

# iv. Print the employee names in sorted order
sorted_employees = sorted(employees)
print(f"Employee names in sorted order: {sorted_employees}")

# v. Remove the last employee from the list
removed_employee = employees.pop()
print(f"Removed the last employee: {removed_employee}")
print(f"List after removing the last employee: {employees}")

# vi. Print the employee names from the list in last-to-first order
reversed_employees = employees[::-1]
print(f"Employee names in last-to-first order: {reversed_employees}")
