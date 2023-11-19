#include <stdio.h>

int main() {
    int hr, min;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);

    switch (hr) {
        case 13:
            printf("Equivalent 12-hour time: 1:%02d PM\n", min);
            break;
        case 14:
            printf("Equivalent 12-hour time: 2:%02d PM\n", min);
            break;
        case 15:
            printf("Equivalent 12-hour time: 3:%02d PM\n", min);
            break;
        case 16:
            printf("Equivalent 12-hour time: 4:%02d PM\n", min);
            break;
        case 17:
            printf("Equivalent 12-hour time: 5:%02d PM\n", min);
            break;
        case 18:
            printf("Equivalent 12-hour time: 6:%02d PM\n", min);
            break;
        case 19:
            printf("Equivalent 12-hour time: 7:%02d PM\n", min);
            break;
        case 20:
            printf("Equivalent 12-hour time: 8:%02d PM\n", min);
            break;
        case 21:
            printf("Equivalent 12-hour time: 9:%02d PM\n", min);
            break;
        case 22:
            printf("Equivalent 12-hour time: 10:%02d PM\n", min);
            break;
        case 23:
            printf("Equivalent 12-hour time: 11:%02d PM\n", min);
            break;
        case 24:
            printf("Equivalent 12-hour time: 12:%02d PM\n", min);
            break;
        default:
            printf("Equivalent 12-hour time: %d:%02d\n", hr, min);
    }

    return 0;
}
