#include "stdio.h"
#include "stdlib.h"

int reverse_sorter(const void *first_arg, const void *second_arg) {
    int* first = (int*) first_arg;
    int* second = (int*) second_arg;

    if (*first < *second ) {
        return 1;
    } else if(*first > *second ) {
        return -1;
    } else {
        return 0;
    }
}

void printarray(const int *array, int arraylength){
    printf("Array {");
    for (int j = 0; j < arraylength; j++ ) {
            printf("%d", array[j] );
            if (j < arraylength-1 ) {printf(", ");}
        }
    printf("}\n");
}

int main() {
    int array[10] = {3, 5, 1, 7, 2, 7, 6, 0, 8, 4};
    int arraylength = sizeof(array) / sizeof(int);

    printarray (array, arraylength);
    qsort (array, arraylength, sizeof(int), &reverse_sorter);
    printarray (array, arraylength);

}