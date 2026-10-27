public class InvalidProductException extends Exception {
    @Override
    public String getMessage() {
        return "You cannot have a product with negative count or negative price.";
    }
}
