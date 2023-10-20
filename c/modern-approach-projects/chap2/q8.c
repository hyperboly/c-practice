#include <stdio.h>

int main() {
    float loan, interest, monthlyPayment, newPayment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("\nEnter interest rate: ");
    scanf("%f", &interest);
    printf("\nEnter monthly payment: ");
    scanf("%f", &monthlyPayment);

    interest /= 1200.00f;
    newPayment = (loan - monthlyPayment) + (loan * interest);
    printf("Balance remaining after first payment: $%.2f\n", newPayment);

    newPayment = (newPayment - monthlyPayment) + (loan * interest);
    printf("Balance remaining after second payment: $%.2f\n", newPayment);

    newPayment = (newPayment - monthlyPayment) + (loan * interest);
    printf("Balance remaining after third payment: $%.2f\n", newPayment);

    return 0;
}

//monthly interest rate = interest rate / 1200
//newPayment = balance - monthly payement + (balance * monthly interest rate)
//balance = newpayment
//print newpayment
