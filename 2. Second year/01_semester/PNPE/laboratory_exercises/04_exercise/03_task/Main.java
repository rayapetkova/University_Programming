public class Main {
    public static void main (String[] args) {
        OrdinaryAccount ordinaryAccount = new OrdinaryAccount(1000);
        SpecialAccount specialAccount = new SpecialAccount(2000);

        ordinaryAccount.addMoney(200);
        specialAccount.addMoney(500);

        try {
            ordinaryAccount.getMoney(3000);
            specialAccount.getMoney(300);
        } catch (ShortFundsException e) {
            System.out.println(e.getMessage());
        }

        System.out.println("Ordinary account balance: " + ordinaryAccount.balance());
        System.out.println("Special account balance: " + specialAccount.balance());
    }
}
