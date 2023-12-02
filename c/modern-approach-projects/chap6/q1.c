#include <stdio.h>

int main(void) {
    float input, max = 0.00;
    do {
        printf("Enter a number: ");
        scanf("%f", &input);
        if (input > max) {
            max = input;
        }
    } while(input > 0);
    printf("The largest number entered was %f\n", max);
    return 0;
}
