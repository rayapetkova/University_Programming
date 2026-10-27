public class Coffee extends Product {
    public String typeCoffee;
    public double caffeine;
    
    public Coffee(String name, double price, int count, String typeCoffee, double caffeine) {
        super(name, price, count);
        this.typeCoffee = typeCoffee;
        this.caffeine = caffeine;
    }
}
