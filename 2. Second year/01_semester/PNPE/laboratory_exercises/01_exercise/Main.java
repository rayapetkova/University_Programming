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










public class Student {

    // Полета (променливи на класа)
    String name;
    int age;
    double grade;

    // Конструктор
    public Student(String name, int age, double grade) {
        this.name = name;
        this.age = age;
        this.grade = grade;
    }

    // Метод
    public void introduce() {
        System.out.println("Аз съм " + name);
        System.out.println("На " + age + " години съм.");
        System.out.println("Успехът ми е " + grade);
    }

    // Метод
    public void study() {
        System.out.println(name + " учи Java.");
    }
}









public class Main {

    public static void main(String[] args) {

        Dog dog = new Dog("Rex", 5);
        Cat cat = new Cat("Maca", 3);

        dog.showInfo();
        dog.makeSound();

        System.out.println();

        cat.showInfo();
        cat.makeSound();
    }
}


// Родителски клас
class Animal {

    String name;
    int age;


    public Animal(String name, int age) {
        this.name = name;
        this.age = age;
    }


    public void showInfo() {
        System.out.println("Име: " + name);
        System.out.println("Възраст: " + age);
    }


    public void makeSound() {
        System.out.println("Животното издава звук.");
    }
}


// Дъщерен клас
class Dog extends Animal {


    public Dog(String name, int age) {

        super(name, age);

    }


    @Override
    public void makeSound() {

        System.out.println(name + " казва: Бау!");

    }
}


// Друг дъщерен клас
class Cat extends Animal {


    public Cat(String name, int age) {

        super(name, age);

    }


    @Override
    public void makeSound() {

        System.out.println(name + " казва: Мяу!");

    }
}










public class Main {

    public static void main(String[] args) {

        // Създаваме обект
        Student student1 = new Student("Raya", 19, 5.75);

        // Използваме getter-и
        System.out.println("Име: " + student1.getName());
        System.out.println("Възраст: " + student1.getAge());
        System.out.println("Оценка: " + student1.getGrade());

        System.out.println();

        // Използваме setter-и
        student1.setName("Maria");
        student1.setAge(20);
        student1.setGrade(6.00);


        System.out.println("След промяна:");
        System.out.println("Име: " + student1.getName());
        System.out.println("Възраст: " + student1.getAge());
        System.out.println("Оценка: " + student1.getGrade());


        System.out.println();

        // Извикване на метод на обекта
        student1.study();

    }
}


// Клас Student
class Student {

    // Полета
    private String name;
    private int age;
    private double grade;


    // Конструктор
    public Student(String name, int age, double grade) {

        this.name = name;
        this.age = age;
        this.grade = grade;

    }


    // Getter за name
    public String getName() {

        return name;

    }


    // Setter за name
    public void setName(String name) {

        this.name = name;

    }


    // Getter за age
    public int getAge() {

        return age;

    }


    // Setter за age
    public void setAge(int age) {

        if (age > 0) {
            this.age = age;
        }
        else {
            System.out.println("Невалидна възраст!");
        }

    }


    // Getter за grade
    public double getGrade() {

        return grade;

    }


    // Setter за grade
    public void setGrade(double grade) {

        if (grade >= 2 && grade <= 6) {
            this.grade = grade;
        }
        else {
            System.out.println("Невалидна оценка!");
        }

    }


    // Метод
    public void study() {

        System.out.println(name + " учи Java.");

    }

}