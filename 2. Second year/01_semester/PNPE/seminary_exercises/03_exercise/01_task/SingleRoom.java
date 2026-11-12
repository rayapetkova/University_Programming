public class SingleRoom extends Room {
    public String bedCategory;

    public SingleRoom(String roomNumber, String roomType, double pricePerNight, int availableNights, String bedCategory) {
        super(roomNumber, roomType, pricePerNight, availableNights);
        this.bedCategory = bedCategory;
    }
}
