import java.util.ArrayList;

public abstract class Course {
    public ArrayList<Student> students;

    public Course(ArrayList<Student> students) {
        this.students = students;
    }

    public double averageGrade() {
        double sum = 0;
        int studentsCount = 0;

        for (Student student: students) {
            for (double grade: student.getGrades()) {
                sum += grade;
                studentsCount++;
            }
        }

        return sum / studentsCount;
    }

    public void addToCourse(Student student) {
        students.add(student);
    }
}
