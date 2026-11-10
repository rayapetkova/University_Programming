import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.Scanner;

public class Main {
    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter file path: ");
        String path = scanner.nextLine();

        WebsiteStatistics statistics = new WebsiteStatistics();

        try {
            BufferedReader websitesDataReader = new BufferedReader(
                new FileReader(path)
            );

            String line;

            while ((line = websitesDataReader.readLine()) != null) {
                Visit visit = parseVisit(line);
                statistics.addVisit(visit);
            }

            websitesDataReader.close();
        } catch (IOException e) {
            System.out.println(e.getMessage());
        } catch (InvalidRecordException e) {
            System.out.println(e.getMessage());
        }

        statistics.printStatistics();
    }

    public static Visit parseVisit(String line) throws InvalidRecordException {
        String dateRegex = "\\d{2}\\.\\d{2}\\.\\d{4} \\d{2}:\\d{2}:\\d{2} https?://\\S+";
        String urlRegex = "https?://\\S+";

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

