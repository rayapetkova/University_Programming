import java.time.LocalDate;
import java.util.ArrayList;

public class WebsiteStatistics {
    public ArrayList<Visit> visits;
    public ArrayList<Website> websites;

    public WebsiteStatistics() {
        this.visits = new ArrayList<>();
        this.websites = new ArrayList<>();
    }

    public void addVisit(Visit visit) {
        visits.add(visit);

        for (Website website : websites) {
            if (website.url.equals(visit.getURL())) {
                website.plusVisit();
                return;
            }
        }

        websites.add(new Website(visit.getURL(), 1));
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

        if (!websites.isEmpty()) {
            Website leastVisited = websites.get(0);

            for (Website website : websites) {
                if (website.visits < leastVisited.visits) {
                    leastVisited = website;
                }
            }

            System.out.println("Least visited website: " + leastVisited.url + ": " + leastVisited.visits);
        }
    }
}