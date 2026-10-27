public class InvalidProductCountException extends Exception {
    @Override
    public String getMessage() {
        return "This product has no more pieces.";
    }
}