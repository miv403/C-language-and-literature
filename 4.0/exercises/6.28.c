#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void duplicateEliminator(int arr[], size_t * size);
void arrayPrint(const int arr[], const size_t * size );

int main(void) {

    size_t size = 5;

    int arr[] = {1, 5, 5, 4, 4};
    arrayPrint(arr, &size);

    duplicateEliminator(arr, &size);

    arrayPrint(arr, &size);
    return 0;

}

void duplicateEliminator(int arr[], size_t * size) {

    for(size_t i = 0; i < *size - 1; ++i) {
        for(size_t j = i + 1; j < *size; ++j) {
            if(arr[j] == arr[i]) {
                for(size_t k = j; k < *size - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                --(*size);
            }
        }
    }
}

void arrayPrint(const int arr[], const size_t * size ) {
    
    for(size_t i = 0; i < *size; ++i) {
        printf("%d ", arr[i]);
    }
    puts("");
}