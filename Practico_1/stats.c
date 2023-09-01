#include "stats.h"
#include <stdio.h>
#define SIZE (40)

int main() {
  unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};

  printStats(test, SIZE);
  
  return 0;
}

void sortArray(unsigned char *test, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (test[j] > test[j + 1]) {
                unsigned char temp = test[j];
                test[j] = test[j + 1];
                test[j + 1] = temp;
            }
        }
    }
}

unsigned char findMax(unsigned char *test, int size) {
    return test[size - 1];
}

unsigned char findMin(unsigned char *test, int size) {
    return test[0];
}

unsigned char findMedio(unsigned char *test, int size) {
    return test[size / 2];
}

int findMedia(unsigned char *test, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += test[i];
    }
    return sum / size;
}

void printArray(unsigned char *test, int size) {
    printf("Array:");
    for (int i = 0; i < size; ++i) {
        printf("%d ", test[i]);
    }
    printf("\n");
}

void printStats(unsigned char *test, int size) {
    sortArray(test, size);
    printf("Valores ordenados: ");
    printArray(test, size);
    printf("Valor máximo: %d\n", findMax(test, size));
    printf("Valor mínimo: %d\n", findMin(test, size));
    printf("Valor medio: %d\n", findMedio(test, size));
    printf("Media: %d\n", findMedia(test, size));
}
