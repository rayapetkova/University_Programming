import java.io.IOException;
import java.util.ArrayList;

public class RoomBookingSystem {
    public static SingleRoom[] singleRooms;
    public static SuiteRoom[] suiteRooms;

    public static void processRoomReservations() {
        try {
            RoomLoader roomLoader = new RoomLoader();

            roomLoader.updateAvailabilityFromFile();
            roomLoader.saveRoomsSerialization();

            Room[] rooms = roomLoader.loadRoomsDeserialization();

            ArrayList<SingleRoom> singlesList = new ArrayList<>();
            ArrayList<SuiteRoom> suitesList = new ArrayList<>();

            for (Room room : rooms) {
                if (room instanceof SingleRoom) {
                    singlesList.add((SingleRoom) room);
                } else if (room instanceof SuiteRoom) {
                    suitesList.add((SuiteRoom) room);
                }
            }

            singleRooms = singlesList.toArray(new SingleRoom[0]);
            suiteRooms = suitesList.toArray(new SuiteRoom[0]);

            for (SingleRoom room : singleRooms) {
                try {
                    room.reserveRoom(2);

                    System.out.println("Reserved single room: " + room.roomNumber);
                } catch (NoAvailableNightsException e) {
                    System.out.println("Cannot reserve room " + room.roomNumber);
                }
            }

            for (SuiteRoom room : suiteRooms) {
                try {
                    room.reserveRoom(2);

                    System.out.println("Reserved suite room: " + room.roomNumber);
                } catch (NoAvailableNightsException e) {
                    System.out.println("Cannot reserve room " + room.roomNumber);
                }
            }
        } catch (IOException | ClassNotFoundException e) {
            System.out.println("File error: " + e.getMessage());
        } catch (InvalidRoomDataExcepton e) {
            System.out.println("Invalid room data: " + e.getMessage());
        }
    }
}
