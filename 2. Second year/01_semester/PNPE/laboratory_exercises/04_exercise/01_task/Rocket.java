public class Rocket implements Vehicle {
    public String name;

    public Rocket(String name) {
        this.name = name;
    }

    @Override
    public String transport() throws InvalidSendingToSpace {
        if (this.name.equals("Rocket1")) {
            throw new InvalidSendingToSpace();
        }

        return "Sending to space...";
    }
}
