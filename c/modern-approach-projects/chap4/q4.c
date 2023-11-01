#include <stdio.h>

int main() {
    int input;
    printf("Enter a number between 0-32767: ");    
    scanf("%d", &input);
    printf("In octal, your number is: %5o\n", input);

    return 0;
}
