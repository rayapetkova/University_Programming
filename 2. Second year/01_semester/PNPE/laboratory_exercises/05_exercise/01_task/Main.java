import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);

        String text = scanner.nextLine();
        String words[] = text.split("[А-Яа-я]+");

        ArrayList<String> palindromes = new ArrayList<>();

        for (String word : words) {
            String reversedWord = new StringBuilder(word).reverse().toString();

            if (word.equalsIgnoreCase(reversedWord)) {
                palindromes.add(word);
            }
        }

        for (String p : palindromes) {
            System.out.println(p);
        }
    }
}

