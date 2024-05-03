// fig06_01.c
// Initializing the elements of an array to zeros.
#include <stdio.h>
// #include <stddef.h> // not mandatory

// function main begins program execution
int main(void) {

    int n[5]; // n is an array of five integers
    // set elements of array n to 0
    for (size_t i = 0; i < 5; ++i) {

        n[i] = 0; // set element at location i to 0
    }
    printf("%s%8s\n", "Element", "Value");
    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {

        printf("%7zu%8d\n", i, n[i]);
    }
/*********************
Element   Value
    0       0
    1       0
    2       0
    3       0
    4       0
**********************/

// fig06_02.c
// Initializing the elements of an array with an initializer list.

    int m[5] = {32, 27, 64, 18, 95}; // initialize n with initializer list

    printf("%s%8s\n", "Element", "Value");

    // output contents of array in tabular format

    for (size_t i = 0; i < 5; ++i) {
        printf("%7zu%8d\n", i, m[i]);
    }
/*********************
Element   Value
    0      32
    1      27
    2      64
    3      18
    4      95
**********************/
}
