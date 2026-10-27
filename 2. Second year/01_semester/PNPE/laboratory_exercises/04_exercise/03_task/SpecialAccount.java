public class SpecialAccount extends Account {
    double money;

    public SpecialAccount(double money) {
        super(money);
    }

    @Override
    public double balance() {
        return money * 2;
    }
}
