public class Main {
    public static void main(String[] args) {
        Person person1 = new Person("Raya", 19);

        System.out.println(person1.getName());
        System.out.println(person1.getAge());

        Person person2 = new Person("Aleks", 10);
        person2.setName("Sashko");
        person2.setAge(11);

        System.out.println(person2.getName());
        System.out.println(person2.getAge());
    }
}


class Person {
    private String name;
    private int age;


    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return this.age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}