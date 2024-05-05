#include <stdio.h>
#define SIZE 5

void bubbleSort(int array[], size_t n);
int main(void) {

    int myArray[SIZE] = {1, 31, 69, 52, 2};

    for(size_t i = 0; i < SIZE; ++i) {
        printf("%d ", myArray[i]);
    }
    puts("");

    bubbleSort(myArray, SIZE);

    for(size_t i = 0; i < SIZE; ++i) {
        printf("%d ", myArray[i]);
    }

    puts("");

    return 0;
}

void bubbleSort(int array[], size_t n) {
    for (size_t i = 1; i < n; ++i) {
        for(size_t j = 0; j < n - 1; ++j) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}