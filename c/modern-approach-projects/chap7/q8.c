#include <stdio.h>
#include <stdlib.h>

int main() {
    int min, hr, minsFromMidnight, ansMin, ansHr;
    char timeChar1, timeChar2;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d %c%c", &hr, &min, &timeChar1, &timeChar2);
    minsFromMidnight = hr*60 + min;

    // Flight times
    int f1 = abs(minsFromMidnight - (8*60));
    int f2 = abs(minsFromMidnight - (9*60 + 47));
    int f3 = abs(minsFromMidnight - (11*60 + 19));
    int f4 = abs(minsFromMidnight - (12*60 + 47));
    int f5 = abs(minsFromMidnight - (14*60));
    int f6 = abs(minsFromMidnight - (15*60 + 45));
    int f7 = abs(minsFromMidnight - (19*60));
    int f8 = abs(minsFromMidnight - (21*60 + 45));

    int minimum = f1;
    ansHr = 8;
    ansMin = 0;

    if (f2 < f1) {
        minimum = f2;
        ansHr = 9;
        ansMin = 43;
    }
    
    if (f3 < minimum) {
        minimum = f3;
        ansHr = 11;
        ansMin = 19;
    }
    if (f4 < minimum) {
        minimum = f4;
        ansHr = 12;
        ansMin = 47;
    }
    if (f5 < minimum) {
        minimum = f5;
        ansHr = 14;
        ansMin = 0;
    }
    if (f6 < minimum) {
        minimum = f6;
        ansHr = 15;
        ansMin = 45;
    }
    if (f7 < minimum) {
        minimum = f7;
        ansHr = 19;
        ansMin = 0;
    }
    if (f8 < minimum) {
        minimum = f8;
        ansHr = 21;
        ansMin = 45;
    }

    printf("Closest Departure Time is: %.2d:%.2d\n", ansHr, ansMin);

    return 0;
}
