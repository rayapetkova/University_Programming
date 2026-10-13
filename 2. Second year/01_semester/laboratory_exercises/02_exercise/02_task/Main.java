import java.util.Scanner;

public class Main {
    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter radius: ");
        double radius = scanner.nextDouble();

        Circle circle = new Circle(radius);
        System.out.println(circle.area());
    }
}

class Circle {
    double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    public double area() {
        return 2 * Math.PI * radius;
    }
}
