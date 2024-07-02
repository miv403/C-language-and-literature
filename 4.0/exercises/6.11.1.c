#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

void sorter0(int [], size_t);
void printArr(int [], int);

int main(void) {

    
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    //int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    //int a[SIZE] = {6, 4, 8, 10, 12, 89, 68, 45, 37, 2};
    //int a[SIZE] = {89, 68, 45, 37, 12, 10, 8, 6, 4, 2};

    puts("");
    puts("Data items in arr");

    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }
    puts("");

    sorter0(a, SIZE);

    puts("\nData items in ascending order");
    // output sorted array
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }
    puts("");
}

void sorter0(int arr[], size_t N) {

    bool swapFlag = true;

    for(size_t i = 1; i < N && swapFlag; ++i) {
        swapFlag = false;
        printf("i: %zu", i);
        puts("");
        for(size_t j = 0; j < N - i; ++j) {
            
            printf("\tj: %zu\n",j);
            puts("");

            if(arr[j] > arr[j + 1]) {
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
                swapFlag = true;
                printArr(arr, N);
                puts("");
            }
            
        }
    }

}

void printArr(int arr[], int size) {

    for (size_t i = 0; i < size; ++i)
    {
        printf("%4d", arr[i]);
    }
    puts("");

}