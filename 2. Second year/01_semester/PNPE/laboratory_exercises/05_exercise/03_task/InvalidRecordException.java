public class InvalidRecordException extends Exception {
    @Override
    public String getMessage() {
        return "Invalid format";
    }
}
