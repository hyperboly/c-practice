#include <stdio.h>

int main(void) {
    int denominator, numerator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &denominator, &numerator);

    // Euclid vars
    int m = numerator, n = denominator;
    while (n != 0){
        int r = m % n;
        m = n;
        n = r;
    }
    
    printf("In lowest terms: %d/%d\n", denominator/m, numerator/m);

    return 0;
}
