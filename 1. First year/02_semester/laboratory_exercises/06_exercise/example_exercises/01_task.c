#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    int *stations;

    i = 7;

    stations = malloc(i * sizeof(int));

    if (stations == NULL) {
        exit(1);
    }

    for (n = 0; n < i; n++) {
        stations[n] = n;
    }

    for (n = 0; n < i; n++) {
        printf("%d ", stations[n]);
        printf("\n");
    }

    int *ptrToStations;
    ptrToStations = stations;

    stations = malloc(++i * sizeof(int));
    for (n = 0; n < i; n++) {
        stations[n] = ptrToStations[n];
    }

    stations[i - 1] = i-1;

    for (n = 0; n < i; n++) {
        printf("%d ", stations[n]);
        printf("\n");
    }

    ptrToStations = stations;
    stations = malloc(--i * sizeof(int));
    int x = 3;
    for (n = x; n < i; n++) {
        ptrToStations[n - 1] = ptrToStations[n];
    }

    for (n = 0; n < i; n++) {
        stations[n] = ptrToStations[n];
    }

    for (n = 0; n < i; n++) {
        printf("%d", stations[n]);
    }

    free(stations);
    free(ptrToStations);

    return 0;
}