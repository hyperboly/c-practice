#include <stdio.h>

int main(void) {
    float letterCnt=0.0f, wordCnt=0.0f;
    char input;
    printf("Enter a sentence: ");

    while((input = getchar()) != '\n') {
        if(input == ' ') {
            wordCnt++;
            continue;
        }

        letterCnt++;
    }
    wordCnt++;

    printf("Average word length: %.2f\n", letterCnt/wordCnt);

    return 0;
}
