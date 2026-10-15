import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void readStudents(Scanner scanner, String[] facultyNumbers, int[] grades) {
        for (int i = 0; i < facultyNumbers.length; i++) {
            System.out.print("Enter student's info: ");
            String facultyNumberGrade = scanner.nextLine();
            String[] parts = facultyNumberGrade.split(" ");

            facultyNumbers[i] = parts[0];
            grades[i] = Integer.parseInt(parts[1]);
        }
    }

    public static void printResult(String[] facultyNumbers, int[] grades) {
        for (int i = 0; i < facultyNumbers.length; i++) {
            System.out.printf("Faculty №: %s; grade: %d%n", facultyNumbers[i], grades[i]);
        }
    }

    public static void printFailedStudents(String[] facultyNumbers, int[] grades) {
        int failedStudentsCount = 0;
        String[] failedStudentsFacultyNumbers = new String[facultyNumbers.length];

        for (int i = 0; i < facultyNumbers.length; i++) {
            String facultyNumber = facultyNumbers[i];
            int grade = grades[i];

            if (grade == 2) {
                failedStudentsCount += 1;
                failedStudentsFacultyNumbers[i] = facultyNumber;
            }

            System.out.printf("Faculty №: %s; grade: %d%n", facultyNumber, grade);
        }

        System.out.printf("Failed students count: %d%n", failedStudentsCount);
        System.out.printf(String.join(", ", failedStudentsFacultyNumbers));
    }

    public static double averageGrade(int[] grades) {
        double gradesSum = 0;

        for (int grade : grades) {
            gradesSum += grade;
        }

        double average = gradesSum / grades.length;
        return average;
    }

    public static int highestGrade(int[] grades) {
        int maxNum = grades[0];

        for (int i = 1; i < grades.length; i++) {
            if (maxNum > grades[i]) {
                maxNum = grades[i];
            }
        }

        return maxNum;
    }

    public static printTopStudents(String[] students, int[] grades) {
        int highestGrade = highestGrade(grades);
        int topStudentsCount = 0;

        for (int i = 0; i < students.length; i++) {
            if (grades[i] == highestGrade) {
                topStudentsCount++;
            }
        }

        String[] studentsHighestGrade = String[topStudentsCount];

        for (int i = 0; i < students.length; i ++) {
            int grade = grades[i];
            String facultyNumber = students[i];

            if (grade == highestGrade) {
                studentsHighestGrade[i] = facultyNumber;
            }
        }

        System.out.printf("Top students: %s%n", String.join(", ", studentsHighestGrade));
    }

    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of students: ");
        int studentsCount = scanner.nextInt();

        String[] facultyNumbers = new String[studentsCount];
        int[] grades = new int[studentsCount];

        readStudents(scanner, facultyNumbers, grades);
        printResult(facultyNumbers, grades);
        printFailedStudents(facultyNumbers, grades);

        double averageGrade = averageGrade(grades);
        System.out.printf("Average grade: %.2f%n", averageGrade);

        int highestGrade = highestGrade(grades);
        System.out.printf("Highest grade: %d%n", highestGrade);

        printTopStudents(facultyNumbers, grades);
    }
}