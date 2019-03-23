#include "stdio.h"

int sum(int a, int b) {
    return a + b;
}

int main() {
    int total = sum(10, 4);
    printf("total %d", total);
}