#include <stdio.h>

int main(void) {
    int m, n;
    printf("Enter 2 integers: ");
    scanf("%d %d", &m, &n);

    while(n!=0) {
        int r = m % n;
        m = n;
        n = r;
    }
    printf("Greatest common divisor: %d\n", m);

    return 0;
}
