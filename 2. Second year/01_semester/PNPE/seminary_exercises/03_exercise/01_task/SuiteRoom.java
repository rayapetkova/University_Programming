public class SuiteRoom extends Room {
    public int roomsCount;

    public SuiteRoom(String roomNumber, String roomType, double pricePerNight, int availableNights, int roomsCount) {
        super(roomNumber, roomType, pricePerNight, availableNights);
        this.roomsCount = roomsCount;
    }
}
