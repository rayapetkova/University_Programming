#include <stdio.h>
#include <string.h>

typedef struct BaseVehicle {
    char brand[20];
    char color[20];
    int speed;
} baseVehicle;

typedef struct Vehicle {
    struct BaseVehicle base;
    char type[20];
} vehicle;

void printVehicle(struct Vehicle vehicle) {
    printf("%s: \n", vehicle.type);
    printf("Brand: %s\n", vehicle.base.brand);
    printf("Color: %s\n", vehicle.base.color);
    printf("Speed: %d\n", vehicle.base.speed);

    printf("\n");
};

void compareVehicles(struct Vehicle first, struct Vehicle second) {
    if (first.base.speed > second.base.speed) {
        printf("%s has more speed than %s", first.type, second.type);
    } else if (first.base.speed == second.base.speed) {
        printf("Both vehicles have equal speed.");
    } else {
        printf("%s has more speed than %s", second.type, first.type);
    }
};

int main() {
    vehicle car, boat, plane;

    strcpy(car.base.brand, "Car Brand 1");
    strcpy(car.base.color, "Car Color 1");
    car.base.speed = 200;
    strcpy(car.type, "Car");

    strcpy(boat.base.brand, "Boat Brand 1");
    strcpy(boat.base.color, "Boat Color 1");
    boat.base.speed = 100;
    strcpy(boat.type, "Boat");

    strcpy(plane.base.brand, "Plane Brand 1");
    strcpy(plane.base.color, "Plane Color 1");
    plane.base.speed = 1000;
    strcpy(plane.type, "Plane");

    printVehicle(car);
    printVehicle(boat);
    printVehicle(plane);

    compareVehicles(car, boat);

    return 0;
}