#include <stdio.h>

int main() {
    int firstDay, firstMonth, firstYr;
    int secondDay, secondMonth, secondYr;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &firstMonth, &firstDay, &firstYr);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &secondMonth, &secondDay, &secondYr);

    if (secondYr < firstYr) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
               secondMonth, secondDay, secondYr,
               firstMonth, firstDay, firstYr);
    }
    else if (secondMonth < firstMonth) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
               secondMonth, secondDay, secondYr,
               firstMonth, firstDay, firstYr);
    }
    else if (secondDay < firstDay) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
               secondMonth, secondDay, secondYr,
               firstMonth, firstDay, firstYr);
    }

    return 0;
}
