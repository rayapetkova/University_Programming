public class Website {
    public String url;
    public int visits;

    public Website(String url, int visits) {
        this.url = url;
        this.visits = visits;
    }

    public void plusVisit() {
        visits++;
    }
}
