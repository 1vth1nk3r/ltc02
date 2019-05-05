#include "stdio.h"

void doubling(int *num){
    *num = *num * 2;
}

int main() {
    int samplenum = 42;
    doubling (&samplenum);
    printf("Doubled number is: %d\n", samplenum);
}