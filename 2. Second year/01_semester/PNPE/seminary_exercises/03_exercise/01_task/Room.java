import java.io.Serializable;

public class Room implements Serializable {
    public String roomNumber;
    public String roomType;
    public double pricePerNight;
    public int availableNights;

    public Room(String roomNumber, String roomType, double pricePerNight, int availableNights) {
        this.roomNumber = roomNumber;
        this.roomType = roomType;
        this.pricePerNight = pricePerNight;
        this.availableNights = availableNights;
    }

    public boolean reserveRoom(int sumNights) throws NoAvailableNightsException {
        if (availableNights >= sumNights) {
            availableNights -= sumNights;

            return true;
        } else {
            throw new NoAvailableNightsException();
        }
    }
}
