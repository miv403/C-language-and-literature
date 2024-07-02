#include <stdio.h>
#include <stdbool.h>

bool linearSearch(int arr[], int key, int size) {

    if(size == 0)
        return false;
    
    if(key == arr[size - 1])
        return true;

    return linearSearch(arr, key, size - 1);
}

int main(void) {

    int arr[] = {1, 2, 3, 4, 5};

    linearSearch(arr, 0, 5)
    ? puts("key found!")
    : puts("not found.");

}