#include <stdio.h>
#include <math.h>

int main(void) {
    double x, newY=0.0, oldY=1.0;
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while(1) {
        newY = (oldY + x / oldY) / 2;

        if(fabs(oldY - newY) < (0.00001 * newY)) {
            break;
        }

        oldY = newY;
    }
    printf("Square root: %.6f\n", newY);

    return 0;
}
