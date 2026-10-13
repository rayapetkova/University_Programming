import java.util.Scanner;

public class Main {
    public static void main (String[] args) {
        Dog dog = new Dog();
        Cat cat = new Cat();

        dog.sound();
        cat.sound();
    }
}

class Animal {
    public void sound() {
        System.out.println("Some sound");
    };
}

class Dog {
    public void sound() {
        System.out.println("bau bau");
    }
}

class Cat {
    public void sound() {
        System.out.println("mqu mqu");
    }
}
