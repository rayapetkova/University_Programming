import java.util.Scanner;

public class Main {
    public static void main (String[] args) {
        Figure rectangle = new Figure(4.0, 5.0);
        System.out.println(rectangle.rectangleArea());
    }
}

class Figure {
    double length;
    double height;

    public Figure(double length, double height) {
        this.length = length;
        this.height = height;
    }

    public double rectangleArea() {
        return length * height;
    }

    public double squareArea() {
        return length * height;
    }
}
