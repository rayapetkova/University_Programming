public interface BankOperator {
    void addMoney(double money);

    void getMoney(double money) throws ShortFundsException;
}
