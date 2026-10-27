public abstract class Account implements BankOperator {
    public double money;

    public Account(double money) {
        this.money = money;
    }

    public abstract double balance();

    @Override
    public void addMoney(double amount) {
        money += amount;
    }

    @Override
    public void getMoney(double amount) throws ShortFundsException {
        if (amount > money) {
            throw new ShortFundsException();
        }

        money -= amount;
    }
}
