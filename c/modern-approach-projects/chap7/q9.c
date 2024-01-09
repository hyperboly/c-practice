#include <stdio.h>

int main(void) {
    int hr, min, resultHr = 0;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hr, &min);

    if(getchar() == 'P') {
        resultHr = hr + 12;
        printf("Equivalent 24-hour time: %d:%d\n", resultHr, min);
        return 0;
    }

    printf("Equivalent 24-hour time: %d:%d\n", resultHr, min);

    return 0;
}
