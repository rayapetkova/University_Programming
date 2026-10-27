public class OrdinaryAccount extends Account {
    double money;

    public OrdinaryAccount(double money) {
        super(money);
    }

    @Override
    public double balance() {
        return money * 1.2;
    }
}
