#include <stdio.h>

int main() {
    float rad, pi = 3.14f;
    printf("Enter radius: ");
    scanf("%f", &rad);
    float ans = (4.0f/3.0f) * pi * rad * rad * rad;
    printf("\nans: %f\n", ans);
    return 0;
}
