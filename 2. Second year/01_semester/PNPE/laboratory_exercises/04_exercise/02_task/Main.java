import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);

        Cafe cafe = new Cafe(new ArrayList<>(), new ArrayList<>());

        Coffee coffee = new Coffee("Coffee1", 5, -2, "Type1", 80);

        while (true) {

            System.out.println("\nMENU");
            System.out.println("1 - Add product");
            System.out.println("2 - Sell product");
            System.out.println("3 - Show products");
            System.out.println("0 - Exit");

            System.out.print("Choose option: ");

            int choice = scanner.nextInt();

            try {
                switch (choice) {
                    case 1:
                        cafe.addProduct(coffee);

                        System.out.println("Product added!");

                        break;
                    case 2:
                        cafe.sellProduct(coffee);

                        System.out.println("Product sold!");

                        break;
                    case 3:
                        cafe.printProducts();
                        break;
                    case 0:
                        System.out.println("Bye!");

                        return;
                    default:
                        System.out.println("Invalid option.");

                }
            } catch (InvalidProductException e) {
                System.out.println("Error: " + e.getMessage());
            } catch (InvalidProductCountException e) {
                System.out.println(e.getMessage());
            }
        }
    }
}