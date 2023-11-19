#include <stdio.h>

int main() {
    int grade;
    printf("Enter numerical grade (1-99): ");
    scanf("%d", &grade);

    if ((grade < 0) || (grade > 100)) {
        printf("Grade cannot be larger than 100 or 0.\n");
        return 1;
    }

    grade /= 10;

    switch (grade) {
        case 9:
        case 10:
            printf("Letter grade: A\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 6:
            printf("Letter grade: D\n");
            break;
        default:
            printf("Letter grade: F\n");
            break;
    }

    return 0;
}
