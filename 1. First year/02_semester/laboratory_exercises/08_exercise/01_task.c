#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct Point {
    int x;
    int y;
    int z;
} point;

int main() {
    point pointsArr[3];

    for (int i = 0; i < 3; i++) {
        int x, y, z;

        printf("Point %d:\n", i);

        printf("Enter x: ");
        scanf("%d", &x);

        printf("Enter y: ");
        scanf("%d", &y);

        printf("Enter z: ");
        scanf("%d", &z);

        printf("\n");

        pointsArr[i].x = x;
        pointsArr[i].y = y;
        pointsArr[i].z = z;
    }

    int firstSide = sqrt((pointsArr[1].x - pointsArr[0].x)*(pointsArr[1].x - pointsArr[0].x) + (pointsArr[1].y - pointsArr[0].y)*(pointsArr[1].y - pointsArr[0].y)) + (pointsArr[1].z - pointsArr[0].z)*(pointsArr[1].z - pointsArr[0].z);
    int secondSide = sqrt((pointsArr[2].x - pointsArr[1].x)*(pointsArr[2].x - pointsArr[1].x) + (pointsArr[2].y - pointsArr[1].y)*(pointsArr[2].y - pointsArr[1].y) + (pointsArr[2].z - pointsArr[1].z)*(pointsArr[2].z - pointsArr[1].z));
    int thirdSide = sqrt((pointsArr[2].x - pointsArr[0].x)*(pointsArr[2].x - pointsArr[0].x) + (pointsArr[2].y - pointsArr[0].y)*(pointsArr[2].y - pointsArr[0].y) + (pointsArr[2].z - pointsArr[0].z)*(pointsArr[2].z - pointsArr[0].z));

    if ((firstSide + secondSide > thirdSide) && (firstSide + thirdSide > secondSide) && (secondSide + thirdSide > firstSide)) {
        printf("The triangle is valid.\n");
        printf("Sides of the triangle: \n");
        printf("%d", firstSide);
        printf("%d", secondSide);
        printf("%d", thirdSide);
    } else {
        printf("The triangle is not valid.");
    }

    return 0;
}