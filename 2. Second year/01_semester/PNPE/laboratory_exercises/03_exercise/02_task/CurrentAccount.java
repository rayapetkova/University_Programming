public class CurrentAccount extends BankAccount {
    public CurrentAccount(double money) {
        super(money);
    }

    @Override
    public double balance() {
        return money + 0.01 * 0.5;
    }
}
