import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String text = scanner.nextLine();

        HashMap<String, String> animals = new HashMap<>();
        animals.put("рибка", "ж");
        animals.put("рак", "м");
        animals.put("октопод", "м");
        animals.put("водорасло", "с");

        Pattern pattern = Pattern.compile("\\d+");
        Matcher matcher = pattern.matcher(text);

        StringBuilder result = new StringBuilder();

        while (matcher.find()) {
            int number = Integer.parseInt(matcher.group());

            String after = text.substring(matcher.end());
            String word = after.split("[,.!?]")[0];

            String wordGender = animals.getOrDefault(word, "м");

            String replacement = numberToWords(number, wordGender);
            matcher.appendReplacement(result, replacement);
        }

        matcher.appendTail(result);
    }

    public static String numberToWords(int number, String gender) {
        switch (number) {
            case 1:
                if (gender.equals("ж"))
                    return "една";
                else if (gender.equals("с"))
                    return "едно";
                else
                    return "един";
            case 2:
                if (gender.equals("ж"))
                    return "две";
                else
                    return "два";
            case 13:
                return "тринадесет";
            case 42:
                return "четиридесет и две";
            case 105:
                return "сто и пет";
            default:
                return String.valueOf(number);
        }
    }
}
