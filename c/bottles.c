#include "stdio.h"

void printverse(int bottles) {
    if (bottles > 2) {
        printf("%d bottles of beer on the wall, %d bottles of beer. \n", bottles, bottles);
        printf("Take one down, pass it around, %d bottles of beer on the wall\n\n", bottles-1);
        printverse(bottles-1);
    } else if(bottles == 2) {
        printf("%d bottles of beer on the wall, %d bottles of beer. \n", bottles, bottles);
        printf("Take one down, pass it around, one bottle of beer on the wall\n\n");
        printverse(bottles-1);
    }
    else {
        printf("One bottle of beer on the wall, one bottle of beer. \n");
        printf("Take one down, pass it around, no more bottles of beer on the wall\n\n");
        printf("No more bottles of beer on the wall, no more bottles of beer.\n");
        printf("We've taken them down and passed them around; now we're drunk and passed out!");
    }
}

int main() {
    printverse(99);
}