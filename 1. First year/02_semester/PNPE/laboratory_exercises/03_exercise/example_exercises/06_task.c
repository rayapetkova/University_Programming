#include <stdio.h>
#include <math.h>

double cilinderVolume(double radius, double height) {
    return 3.14 * pow(radius, 2) * height;
}

double parallelepipedVolume(double a, double b, double c) {
    return a * b * c;
}


int main() {
    double a, b, c, r, h;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &r);
    scanf("%lf", &h);

    double volumeCilinder = cilinderVolume(r, h);
    double volumeParallelepiped = parallelepipedVolume(a, b, c);

    printf("Cilinder volume: %.2lf\n", volumeCilinder);
    printf("Parallelepiped volume: %.2lf", volumeParallelepiped);

    return 0;
}
