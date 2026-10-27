public class Main {
    public static void main (String[] args) {
        Rocket[] rockets = {new Rocket("Rocket1"), new Rocket("Rocket2"), new Rocket("Rocket3")};

        for (Rocket rocket : rockets) {
            try {
                rocket.transport();
            } catch (InvalidSendingToSpace e) {
                System.out.println(e.getMessage());
            }
        }

    }
}



