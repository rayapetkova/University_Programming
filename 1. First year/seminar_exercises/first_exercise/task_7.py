grade = float(input())
max_uni_scholarship = float(input())

student_scholarship = 0

if grade >= 5.50:
    student_scholarship = max_uni_scholarship
elif grade >= 5:
    student_scholarship = 0.7 * max_uni_scholarship
elif grade >= 4.50:
    student_scholarship = 0.5 * max_uni_scholarship

print(f'Student scholarship: {student_scholarship}')