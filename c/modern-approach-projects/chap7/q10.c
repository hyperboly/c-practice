#include <stdio.h>
#include <ctype.h>

int main(void) {
    char input;
    int cnt = 0;
    printf("Enter a sentence: ");
    while((input = getchar()) != '\n') {
        switch(toupper(input)) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cnt++;
                break;
        }
    }    
    printf("Your sentence contains %d vowels\n", cnt);

    return 0;
}
