public class Tea extends Product {
    public String sortTea;
    public double time;

    public Tea (String name, double price, int count, String sortTea, double time) {
        super(name, price, count);
        this.sortTea = sortTea;
        this.time = time;
    }
}
