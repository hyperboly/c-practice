#include <stdio.h>

int main() {
    float taxedIncome;
    printf("Enter the amount of taxable income: ");
    scanf("%f", &taxedIncome);

    if (taxedIncome < 750.00f) {
        printf("Tax value: $%.2f\n", taxedIncome * 0.01f);
    }
    else if (taxedIncome < 2250.00f) {
        printf("Tax value: $%.2f\n", taxedIncome * 0.02f);
    }
    else if (taxedIncome < 3750.00f) {
        printf("Tax value: $%.2f\n", taxedIncome * 0.03f);
    }
    else if (taxedIncome < 5250.00f) {
        printf("Tax value: $%.2f\n", taxedIncome * 0.04f);
    }
    else if (taxedIncome < 7000.00f) {
        printf("Tax value: $%.2f\n", taxedIncome * 0.05f);
    }
    else {
        printf("Tax value: $%.2f\n", taxedIncome * 0.06f);
    }

    return 0;
}
