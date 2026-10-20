public class Main {
    public static void main (String[] args) {
        double money = 1000;

        SavingsAccount savingsAccount = new SavingsAccount(money);
        CurrentAccount currentAccount = new CurrentAccount(money);

        savingsAccount.addToMoney(1000);
        System.out.println(savingsAccount.balance());

        currentAccount.addToMoney(500);
        currentAccount.removeFromMoney(200);
        System.out.println(currentAccount.balance());
    }
}
