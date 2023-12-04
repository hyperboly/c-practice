#include <stdio.h>

int main(void) {
    float n;
    float ans = 1.0f;
    printf("Input n: ");
    scanf("%f", &n);

    int factorial = 1, epsilon = 1;
    
    while(1){
        factorial *= epsilon;

        if (1.0f / factorial < n) {
            break;
        }

        ans += (1.0f / factorial);
        epsilon++;
    }
    printf("e is approximately %f\n", ans);

    return 0;
}
