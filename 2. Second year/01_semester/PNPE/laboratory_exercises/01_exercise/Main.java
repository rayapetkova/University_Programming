import java.util.Scanner;

public class Main {
    public static double calculateBMI(double weight, double heightM) {
        double result = weight / (heightM * heightM);
        return result;
    }

    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter weigth (kg): ");
        double weight = scanner.nextDouble();

        System.out.print("Enter height (m): ");
        double height = scanner.nextDouble();

        double result = calculateBMI(weight, height);
        System.out.printf("Result: %.2f", result);

        scanner.close();
    }
}
