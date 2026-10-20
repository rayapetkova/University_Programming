import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);

        Course[] courses = {
                new Maths(new ArrayList<>()),
                new IT(new ArrayList<>())
        };

        for (Course course : courses) {
            System.out.print("Students count: ");
            int studentsCount = scanner.nextInt();
            scanner.nextLine();

            for (int i = 1; i <= studentsCount; i++) {
                System.out.print("Student " + i + " name: ");
                String name = scanner.nextLine();

                System.out.print("Grades: ");
                String gradesInput = scanner.nextLine();

                String[] gradesStrings = gradesInput.split(", ");
                double[] grades = new double[gradesStrings.length];

                for (int j = 0; j < gradesStrings.length; j++) {
                    grades[j] = Double.parseDouble(gradesStrings[j]);
                }

                Student student = new Student(name, grades);
                course.addToCourse(student);
            }

            System.out.println("Average grade: " + course.averageGrade());
        }
    }
}
