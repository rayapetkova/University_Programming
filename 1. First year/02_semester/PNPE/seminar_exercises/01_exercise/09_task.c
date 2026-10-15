#include <stdio.h>
#include <math.h>

int main() {
    double width;
    double height;

    printf("Width in m: ");
    scanf("%lf", &width);

    printf("Height in m: ");
    scanf("%lf", &height);

    width = width * 100;
    height = height * 100;

    int workplaces_in_w = floor(width / 120);
    int workplaces_in_h = floor((height - 100) / 70);

    int workplaces = workplaces_in_w * workplaces_in_h - 3;
    printf("Workplaces: %d\n", workplaces);

    return 0;
}