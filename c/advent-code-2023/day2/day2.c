#include <stdio.h>
#include <stdlib.h>

#define STR_BUFFER 256

int main(void) {
    char input[STR_BUFFER];

    for(int i=0; i<100; i++){
        fgets(input, STR_BUFFER, stdin);
        for(int j=0; j<STR_BUFFER; j++){
        }
    }

    return 0;
}
