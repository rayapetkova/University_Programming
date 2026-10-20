public class SavingsAccount extends BankAccount {
    public SavingsAccount(double money) {
        super(money);
    }

    @Override
    public double balance() {
        return money + (money * 0.03);
    }
}
