#include <linux/limits.h>
#include <stdio.h>

int main() {
    int num1, denom1, num2, denom2, result_num, result_denom;
    char oper;
    
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &oper, &num2, &denom2);

    switch(oper) {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            break;
    }

    printf("Result: %d/%d", result_num, result_denom);

    return 0;
}
