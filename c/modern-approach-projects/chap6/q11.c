#include <stdio.h>

int main(void) {
    int n;
    float ans = 1.0f;
    printf("Input n: ");
    scanf("%d", &n);

    int factorial = 1;
    
    for(int i=1; i<=n; i++){
        factorial *= i;
        ans += (1.0f / factorial);
    }
    
    printf("e is approximately %f\n", ans);

    return 0;
}
