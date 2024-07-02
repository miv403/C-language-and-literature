#include <stdio.h>

void printArray(int arr[], size_t size) {

    if(size - 1 == 0){
        printf("%d ", arr[size - 1]);
    }else {
        printArray(arr, size - 1);
        printf("%d ", arr[size - 1]);
    }



}

int main(void) {

    
    int arr[5] = {1, 2, 4, 4, 5};

    printArray(arr, 5);
    puts("");
}