public class NoAvailableNightsException extends Exception {
    @Override
    public String getMessage() {
        return "No more available nights.";
    }
}
