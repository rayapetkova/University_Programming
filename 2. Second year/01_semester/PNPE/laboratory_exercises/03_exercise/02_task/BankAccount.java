public abstract class BankAccount {
    public double money;

    public BankAccount(double money) {
        this.money = money;
    }

    public abstract double balance();

    public void addToMoney(double newMoney) {
        money += newMoney;
    }

    public void removeFromMoney(double newMoney) {
        money -= newMoney;
    }
}
