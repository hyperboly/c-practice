#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &num1, &num2);

    if ((num1 == 1) && (num2 == 0)){
        printf("You entered the number ten\n");
        return 0;
    }
    if ((num1 == 1) && (num2 == 1)){
        printf("You entered the number eleven\n");
        return 0;
    }
    if ((num1 == 1) && (num2 == 2)){
        printf("You entered the number twelve\n");
        return 0;
    }
    if ((num1 == 1) && (num2 == 3)){
        printf("You entered the number thirteen\n");
        return 0;
    }
    if ((num1 == 1) && (num2 == 4)){
        printf("You entered the number fourteen\n");
        return 0;
    }
    if ((num1 == 1) && (num2 == 5)){
        printf("You entered the number fifteen\n");
        return 0;
    }
    if ((num1 == 1) && (num2 == 6)){
        printf("You entered the number sixteen\n");
        return 0;
    }
    if ((num1 == 1) && (num2 == 7)){
        printf("You entered the number seventeen\n");
        return 0;
    }
    if ((num1 == 1) && (num2 == 8)){
        printf("You entered the number eighteen\n");
        return 0;
    }
    if ((num1 == 1) && (num2 == 9)){
        printf("You entered the number nineteen\n");
        return 0;
    }

    switch (num1) {
        case 9:
            printf("You entered the number ninty");
            break;
        case 8:
            printf("You entered the number eighty");
            break;
        case 7:
            printf("You entered the number seventy");
            break;
        case 6:
            printf("You entered the number sixty");
            break;
        case 5:
            printf("You entered the number fifty");
            break;
        case 4:
            printf("You entered the number forty");
            break;
        case 3:
            printf("You entered the number thirty");
            break;
        case 2:
            printf("You entered the number twenty");
            break;
    }

    switch (num2) {
        case 1:
            printf("-one\n");
            break;
        case 2:
            printf("-two\n");
            break;
        case 3:
            printf("-three\n");
            break;
        case 4:
            printf("-four\n");
            break;
        case 5:
            printf("-five\n");
            break;
        case 6:
            printf("-six\n");
            break;
        case 7:
            printf("-seven\n");
            break;
        case 8:
            printf("-eight\n");
            break;
        case 9:
            printf("-nine\n");
            break;
    }

    return 0;
}
