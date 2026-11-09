import java.time.LocalDate;
import java.util.ArrayList;

public class WebsiteStatistics {
    public ArrayList<Visit> visits;

    public WebsiteStatistics() {
        visits = new ArrayList<>();
    }

    public void addVisit(Visit visit) {
        visits.add(visit);
    }

    public void printStatistics() {
        ArrayList<LocalDate> dates = new ArrayList<>();

        for (Visit visit : visits) {
            LocalDate date = visit.getDate().toLocalDate();

            if (!dates.contains(date)) {
                dates.add(date);
            }
        }

        for (LocalDate date : dates) {
            int totalVisits = 0;

            for (Visit visit : visits) {
                if (visit.getDate().toLocalDate().equals(date)) {
                    totalVisits++;
                }
            }

            StringBuilder finalText = new StringBuilder();

            finalText.append(date);
            finalText.append(": ");
            finalText.append(totalVisits);
            finalText.append(" visits");

            System.out.println(finalText.toString());
        }
    }
}