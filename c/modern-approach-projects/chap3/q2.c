#include <stdio.h>

int main() {
    int itemNum, m, d, y;
    float unitP;
    printf("Enter item number: ");
    scanf("%d", &itemNum);
    printf("Enter unit price: ");
    scanf("%f", &unitP);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);
    printf("\nItem\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("\t%d\t$%-.2f\t%d/%d/%d\n", itemNum, unitP, m, d, y);
    return 0;
}
