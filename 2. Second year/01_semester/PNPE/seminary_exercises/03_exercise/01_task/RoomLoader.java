import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;

public class RoomLoader implements Reservable {
    public ArrayList<Room> rooms;

    public RoomLoader() {
        rooms = new ArrayList<>();
    }

    @Override
    public void updateAvailabilityFromFile() throws IOException, InvalidRoomDataExcepton {
        BufferedReader roomsReader = new BufferedReader(
            new FileReader("rooms.txt")
        );

        String line;
        while ((line = roomsReader.readLine()) != null) {
            String[] parts = line.split("\\*");

            if (parts.length != 5) {
                throw new InvalidRoomDataExcepton();
            }

            try {
                int typeRoomNum = Integer.parseInt(parts[0]);
                String roomNumber = parts[1];
                String roomType = parts[2];
                double roomPrice = Double.parseDouble(parts[3]);
                int nights = Integer.parseInt(parts[4]);

                if (typeRoomNum == 1) {
                    SingleRoom room = new SingleRoom(
                        roomNumber,
                        roomType,
                        roomPrice,
                        nights,
                        "Single Bed"
                    );

                    rooms.add(room);
                } else if (typeRoomNum == 2) {
                    SuiteRoom room = new SuiteRoom(
                        roomNumber,
                        roomType,
                        roomPrice,
                        nights,
                        3
                    );

                    rooms.add(room);
                } else {
                    throw new InvalidRoomDataExcepton();
                }
            } catch (NumberFormatException e) {
                throw new InvalidRoomDataExcepton();
            }
        }

        roomsReader.close();
    }

    public void saveRoomsSerialization() throws IOException {
        Room[] roomsArray = rooms.toArray(new Room[0]);

        ObjectOutputStream roomsSerOut = new ObjectOutputStream(
            new FileOutputStream("rooms.ser")
        );
        roomsSerOut.writeObject(roomsArray);
        roomsSerOut.close();
    }

    public Room[] loadRoomsDeserialization() throws IOException, ClassNotFoundException {
        ObjectInputStream roomsDeserIn = new ObjectInputStream(
            new FileInputStream("rooms.ser")
        );

        Room[] rooms = (Room[]) roomsDeserIn.readObject();
        roomsDeserIn.close();

        return rooms;
    }
}
