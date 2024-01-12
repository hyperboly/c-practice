#include <stdio.h>

int main(void) {
    char input[256];
    float ans, current;

    fgets(input, 256, stdin);

    for(int i=0; i<sizeof(input); i++) {
        if(input[i] == '+') {
        }
        else if(input[i] == '-') {
        }
        else if(input[i] == '*') {
        }
        else if(input[i] == '%') {
        }
        else if(input[i] == '.') {
        }
        else {
        }
    }

    printf("Enter an expression: ");

    return 0;
}
