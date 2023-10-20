#include <stdio.h>

int main() {
    float totalMoney;
    printf("Enter dollars-and-cents amount: ");
    scanf("%f", &totalMoney);
    totalMoney += totalMoney * 0.05f;
    printf("\nAfter tax: $%.2f\n", totalMoney);
    return 0;
}
