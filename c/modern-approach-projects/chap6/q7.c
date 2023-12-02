#include <stdio.h>

int main(void) {
    int n, odd = 3, square = 1;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    for (int i=1; i <= n; i++) {
        printf("%10d%10d\n", i, square);
        odd += 2;
        square += odd;
    }
    return 0;
}
