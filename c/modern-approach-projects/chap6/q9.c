#include <stdio.h>

int main(void) {
    float loan, interest, monthlyPayment, amountOfPayments;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("\nEnter interest rate: ");
    scanf("%f", &interest);
    printf("\nEnter monthly payment: ");
    scanf("%f", &monthlyPayment);
    printf("\nEnter how many payments: ");
    scanf("%f", &amountOfPayments);

    interest /= 1200.00f;
    float monthly_interest = ((interest / 100) / 12) + 1;

    for(int i=0; i<amountOfPayments; i++){
        loan *= monthly_interest;
        loan -= monthlyPayment;
        printf("Balance remaining after %d month(s): $%.2f\n", i, loan);
    }

    return 0;
}
