import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
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

        File coursesFile = new File("D:\\all downloads\\java_files\\courses.txt");
        File studentsFile = new File("D:\\all downloads\\java_files\\students.txt");

        try {
            if (coursesFile.createNewFile() && studentsFile.createNewFile()) {
                System.out.println("Successfully created file.");

                BufferedWriter coursesWriter = new BufferedWriter(
                    new FileWriter(coursesFile)
                );
                BufferedWriter studentsWriter = new BufferedWriter(
                    new FileWriter(studentsFile)
                );

                for (Course course : courses) {
                    String courseText = course.getClass().getName() + String.valueOf(course.averageGrade());

                    coursesWriter.write(courseText);
                    coursesWriter.newLine();

                    for (Student student : course.students) {
                        studentsWriter.write(student.getName() + ": ");
                        studentsWriter.write(Arrays.toString(student.getGrades()));
                    }
                }

                coursesWriter.close();
                studentsWriter.close();
            } else {
                System.out.println("Already created");
            }
        } catch (IOException e) {
            System.out.println("Error creating file.");
        }
    }
}
