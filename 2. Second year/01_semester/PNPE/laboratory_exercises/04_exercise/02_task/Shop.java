public interface Shop {
    void addProduct(Product product) throws InvalidProductException;

    void sellProduct(Product product) throws InvalidProductCountException;

    void printProducts();
}
