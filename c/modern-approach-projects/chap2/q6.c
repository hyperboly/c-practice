#include <stdio.h>

int main() {
    int x, ans;
    printf("Enter value for x: ");
    scanf("%d", &x);
    ans = 3*x + 2;
    ans *= x;
    ans -= 5;
    ans *= x;
    ans -= 1;
    ans *= x;
    ans += 7;
    ans *= x;
    ans -= 6;
    printf("\nAnswer: %d\n", ans);
    return 0;
}
