#include <stdio.h>

int main(void) {
    int soi = sizeof(int);
    printf("%d bytes\n", soi);
    int sos = sizeof(short);
    printf("%d bytes\n", sos);
    int sol = sizeof(long);
    printf("%d bytes\n", sol);
    int sof = sizeof(float);
    printf("%d bytes\n", sof);
    int sod = sizeof(double);
    printf("%d bytes\n", sod);
    int sodl = sizeof(long double);
    printf("%d bytes\n", sodl);

    // better way of doing it
    // printf("Size of int: %zu bytes\n", sizeof(int));

    return 0;
}
