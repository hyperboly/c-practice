#include <stdio.h>

int main() {
    int x, ans;
    printf("Enter value for x: ");
    scanf("%d", &x);
    ans = (5*x*x*x*x*x) + (2*x*x*x*x) -
    (5*x*x*x) - (x*x) + (7*x) - 6;
    printf("\nAnswer: %d\n", ans);
    return 0;
}
