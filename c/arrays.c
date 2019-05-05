#include "stdio.h"

int main() {
    int arraynum[] = {1, 5, 3, 6, 8};
    printf("Element[2] = %d\n", arraynum[1]);
    
    int arraylength = sizeof(arraynum) / sizeof(arraynum[0]); 
    printf("Length of arraynum: %d\n", arraylength);

    printf("Element[last] = %d\n", arraynum[arraylength-1]);

    char arraystr[3][10] = {"aaa", "bbb", "ccc"};
    printf("Element[2] = %s\n", arraystr[1]);
    
}