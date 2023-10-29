#include <stdio.h>

int main() {
    int zone,prefix,suffix;
    printf("Enter phone number [(xxx) xxx-xxxx]: \n");
    scanf("(%d) %d-%d", &zone,&prefix,&suffix);
    printf("You entered: %d.%d.%d\n", zone, prefix, suffix);
    return 0;
}
