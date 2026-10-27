import java.util.ArrayList;

public class Cafe implements Shop {
    public ArrayList<Coffee> coffees;
    public ArrayList<Tea> teas;

    public Cafe(ArrayList<Coffee> coffees, ArrayList<Tea> teas) {
        this.coffees = coffees;
        this.teas = teas;
    }

    @Override
    public void addProduct(Product product) throws InvalidProductException {
        if (product.price < 0 || product.count < 0) {
            throw new InvalidProductException();
        }

        if (product instanceof Coffee) {
            coffees.add((Coffee) product);
        } else if (product instanceof Tea) {
            teas.add((Tea) product);
        }
    }

    @Override
    public void sellProduct(Product product) throws InvalidProductCountException {
        for (Coffee coffee : coffees) {
            if (coffee.name.equals(product.name)) {
                if (coffee.count < 0) {
                    throw new InvalidProductCountException();
                }

                coffees.remove(coffee);
                coffee.count--;
            }
        }

        for (Tea tea : teas) {
            if (tea.name.equals(product.name)) {
                if (tea.count < 0) {
                    throw new InvalidProductCountException();
                }

                coffees.remove(tea);
                tea.count--;
            }
        }
    }

    @Override
    public void printProducts() {
        for (Coffee coffee : coffees) {
            System.out.println(coffee.name + " - " + coffee.count + "pcs.");
        }

        for (Tea tea : teas) {
            System.out.println(tea.name + " - " + tea.count + "pcs.");
        }
    }
}
