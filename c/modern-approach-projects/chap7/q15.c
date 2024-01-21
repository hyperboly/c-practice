#include <stdio.h>

int main(void) {
    short input, fact=1, cnt=1;
    printf("Enter a positive integer: ");
    scanf("%hu", &input);

    while(cnt <= input) {
        fact *= cnt;
        cnt++;
    }

    printf("Factorial of %hu: %hu\n", input, fact);

    return 0;
}
