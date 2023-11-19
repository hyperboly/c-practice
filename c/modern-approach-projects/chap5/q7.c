#include <stdio.h>

int main() {
    int i1, i2, i3, i4, min, max;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    min = i1;
    max = i1;

    if (i1 < i2) {
        max = i2;
        min = i1;
    }

    if (max < i3) {
        max = i3;
    }
    else if (min > i3) {
        min = i3;
    }

    if (max < i4) {
        max = i4;
    }
    else if (min > i4) {
        min = i4;
    }

    printf("Largest integer: %d\tSmallest integer: %d\n", max, min);
    
    return 0;
}
