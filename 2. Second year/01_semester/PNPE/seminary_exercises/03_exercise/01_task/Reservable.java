import java.io.IOException;

public interface Reservable {
    void updateAvailabilityFromFile() throws IOException, InvalidRoomDataExcepton;
}
