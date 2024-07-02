#include <stdio.h>
#define SIZE 10

// modify bubbleSort:
//  1. make the highest elements are always in place
//  2. terminate the loop if there are no swap have been made.

void sort(int unsigned a[], size_t n);
int main(void) {

//    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    //int a[SIZE] = {6, 4, 8, 10, 12, 89, 68, 45, 37, 2};
    unsigned int a[SIZE] = {89, 68, 45, 37, 12, 10, 8, 6, 4, 2};

    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }
    puts("");

    sort(a, SIZE);

    puts("\nData items in ascending order");
    // output sorted array
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }
    puts("");


}

void sort(unsigned int a[], size_t n) {
    int swapped = 1;
    for(size_t i = 0; i < n - 1 && swapped; ++i) {
        int swapped = 0;
        for(size_t j = i + 1; j < n; ++j) {
            if( a[i] > a[j]) {
                int hold = a[i];
                a[i] = a[j];
                a[j] = hold;
                swapped = 1;
            }
        }
    }
}

void bubbleSort(int a[], size_t n) {
    for(size_t i = 1; i < n; ++i) {
        for(size_t j = 0; j < n - 1; ++j) {
            if( a[j] > a[j + 1]) {
                int tmp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = tmp;
            }
        }
    }
}

/* 
void sort(unsigned int a[], size_t n) {

    int swapped = 1;
    int COUNTER = 0;
    int SWAPC = 0;
    for(size_t i = 0; i < n - 1 && swapped; ++i) {
        int swapped = 0;
        COUNTER++;
        for(size_t j = i + 1; j <= n; ++j) {
            COUNTER++;
            printf("i: %zu: ", i);
            for (size_t i = 0; i < SIZE; ++i) {
                printf("%4d", a[i]);
            }
            puts(""); 
            //printf("swapC: %d\n", swapC);
            if( a[i] > a[j]) {
                int hold = a[i];
                a[i] = a[j];
                a[j] = hold;
                swapped = 1;
                SWAPC++;
                //printf("%d ", swapC);
            }

            //printf("%s%d", "a[i] = ", a[i]);
            //puts("");
        }
    }
    printf("%d  %d\n", COUNTER, SWAPC);
}
*/