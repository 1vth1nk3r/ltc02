#include "stdio.h"

void printverse() {
    printf("у попа была собака, он её любил\n");
    printf("она съела кусок мяса, он её убил\n");
    printf("в землю закопал\n");
    printf("и надпись написал, что ");
    printverse();
}

int main() {
    printverse();
}