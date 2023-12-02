#include <stdio.h>

int main(void) {
    int daysInMonth, startDay;
    printf("Enter number of days in month: ");
    scanf("%d", &daysInMonth);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startDay);

    for(int i=0; i<startDay; i++) {
        printf("  ");
    }

    for(int i=1, j=0; i<=daysInMonth; i++,j++) {
        printf("%3d", i);
        if((startDay + j) % 7 == 0){
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
