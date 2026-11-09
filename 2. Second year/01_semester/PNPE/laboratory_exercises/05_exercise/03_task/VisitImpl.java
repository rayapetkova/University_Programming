import java.time.LocalDateTime;

public class VisitImpl implements Visit {
    public LocalDateTime date;
    public String url;

    public VisitImpl(LocalDateTime date, String url) {
        this.date = date;
        this.url = url;
    }

    @Override
    public LocalDateTime getDate() {
        return this.date;
    }

    @Override
    public String getURL() {
        return this.url;
    }
}
