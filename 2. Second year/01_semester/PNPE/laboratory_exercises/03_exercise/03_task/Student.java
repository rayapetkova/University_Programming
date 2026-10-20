public class Student {
    private String name;
    private double[] grades;

    public Student(String name, double[] grades) {
        this.name = name;
        this.grades = grades;
    }

    public double[] getGrades() {
        return grades;
    }

    public String getName() {
        return name;
    }
}
