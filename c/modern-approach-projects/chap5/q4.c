#include <stdio.h>

int main() {
    int knot;
    printf("Enter the wind speed (knot): ");
    scanf("%d", &knot);

    if (knot < 1) {
        printf("Description: Calm\n");
    }
    else if (knot < 4) {
        printf("Description: Light air\n");
    }
    else if (knot < 28) {
        printf("Description: Breeze\n");
    }
    else if (knot < 48) {
        printf("Description: Gale\n");
    }
    else if (knot < 64){
        printf("Description: Storm\n");
    }
    else {
        printf("Description: Hurricane\n");
    }

    return 0;
}
