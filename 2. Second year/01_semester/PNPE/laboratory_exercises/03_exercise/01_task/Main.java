public class Main {
    public static void main(String[] args) {
        Player[] players = {new FootballPlayer(), new ChessPlayer()};

        for (Player player : players) {
            System.out.println(player.play());
        }
    }
}
