#include <stdio.h>

int main(void) {
    int month = -1, date = -1, year = -1;
    int minMonth = -1, minDate = -1, minYear = -1;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &minMonth, &minDate, &minYear);

    while(year != 0 && month != 0 && date != 0) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &date, &year);

        if(month == 0 && date == 0 && year == 0) {
            printf("%d/%d/%d is the earliest date\n", minMonth, minDate, minYear);
            return 0;
        }

        if(minYear > year) {
            minYear = year;
            minMonth = month;
            minDate = date;
        }
    }
    return 0;
}
