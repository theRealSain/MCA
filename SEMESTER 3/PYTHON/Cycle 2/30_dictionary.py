# Step 1: Define the function makeDictionary that creates a dictionary from two lists
def makeDictionary(names, scores):
    # Create a dictionary with names as keys and scores as values
    student_dict = dict(zip(names, scores))
    return student_dict

# Step 2: Define the lists
names = ['Rahul', 'Lisa', 'Ken', 'Amit', 'John']
scores = [45, 78, 88, 92, 55]

# Step 3: Create the dictionary using the function
student_scores = makeDictionary(names, scores)

# i. Print the score of Lisa
print(f"Score of Lisa: {student_scores['Lisa']}")

# ii. Change the score of Rahul to 34
student_scores['Rahul'] = 34
print(f"Updated score of Rahul: {student_scores['Rahul']}")

# iii. Ken dropped the course, so remove his details
student_scores.pop('Ken', None)
print(f"Updated student list after removing Ken: {student_scores}")

# iv. Calculate the average of scores from the dictionary
total_score = sum(student_scores.values())
average_score = total_score / len(student_scores)
print(f"Average score of students: {average_score:.2f}")

# v. Print students with their scores in alphabetical order
sorted_students = sorted(student_scores.items())  # Sort by name
print("Students and their scores in alphabetical order:")
for student, score in sorted_students:
    print(f"{student}: {score}")
