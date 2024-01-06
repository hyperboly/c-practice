#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar(); // added to recieve the newline from scanf

    for(i = 1; i <= n; i++) {
        printf("%10d\t%10d\n", i, i * i);
        if((i % 24) == 0) {
            do {
                printf("Press ENTER to continue\n");
            } while(getchar() != '\n');
        }
    }
    return 0;
}
