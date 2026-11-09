import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.Scanner;

public class Main {
    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);

        WebsiteStatistics statistics = new WebsiteStatistics();

        while (true) {
            String line = scanner.nextLine();

            if (line.equals("End")) {
                break;
            }

            try {
                Visit visit = parseVisit(line);
                statistics.addVisit(visit);
            } catch (InvalidRecordException e) {
                System.out.println(e.getMessage());
            }
        }

        statistics.printStatistics();
    }

    public static Visit parseVisit(String line) throws InvalidRecordException {
        String dateRegex = "\\d{2}\\.\\d{2}\\.\\d{4} \\d{2}:\\d{2}:\\d{2} \\S+";
        String urlRegex = "[a-zA-Z0-9]+\\.[a-zA-Z]+";

        if (!line.matches(dateRegex)) {
            throw new InvalidRecordException();
        }

        String[] parts = line.split(" ");

        String wholeDate = parts[0] + " " + parts[1];
        String url = parts[2];

        try {
            DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd.MM.uuuu HH:mm:ss");
            LocalDateTime date = LocalDateTime.parse(wholeDate, formatter);

            if (!url.matches(urlRegex)) {
                throw new InvalidRecordException();
            }

            return new VisitImpl(date, url);
        } catch (Exception e) {
            throw new InvalidRecordException();
        }
    }
}

