#include <stdio.h>

int main(void) {
    char firstName[256], lastName[256];
    printf("Enter a first and last name: ");
    scanf("%s %s", firstName, lastName);
    printf("%s, %c.\n", lastName, firstName[0]);

    return 0;
}
