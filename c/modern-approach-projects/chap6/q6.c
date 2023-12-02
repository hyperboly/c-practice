#include <stdio.h>

int main(void) {
    int input, sq=0;
    printf("Enter a number: ");
    scanf("%d", &input);
    for(int i=0; sq<input; i++) {
        sq = (i*2) * (i*2);
        printf("%d\n", sq);
    }
    return 0;
}
