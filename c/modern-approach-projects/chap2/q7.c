#include <stdio.h>

int main() {
    int twenties, tens, fives, dollarAmount;
    printf("Input a US Dollar amount: ");
    scanf("%d", &dollarAmount);
    twenties = dollarAmount / 20;
    dollarAmount -= twenties*20;
    tens = dollarAmount / 10;
    dollarAmount -= tens*10;
    fives = dollarAmount / 5;
    dollarAmount -= fives*5;
    printf("\n$20 bills: %d\n", twenties);
    printf("\n$10 bills: %d\n", tens);
    printf("\n$5 bills: %d\n", fives);
    printf("\n$1 bills: %d\n", dollarAmount);
    return 0;
}
