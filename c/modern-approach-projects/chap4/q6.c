#include <stdio.h>

int main() {
    int ean, ean1, ean2, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    ean1 = i2 + i4 + i6 + i8 + i10 + i12;
    ean2 = i1 + i3 + i5 + i7 + i9 + i11;

    ean = ean1*3 + ean2;
    ean--;
    ean %= 10;
    ean = 9 - ean;
    printf("Check digit: %d\n", ean);

    return 0;
}
