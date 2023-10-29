#include <stdio.h>

int main() {
    int gs1,gid,pubCode,itemNum,checkDig;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",&gs1,&gid,&pubCode,&itemNum,&checkDig);
    printf("GS1 prefix: %d\n", gs1);
    printf("Group Identifier: %d\n", gid);
    printf("Publisher code: %d\n", pubCode);
    printf("Item number: %d\n", itemNum);
    printf("Check digit: %d\n", checkDig);
    return 0;
}
