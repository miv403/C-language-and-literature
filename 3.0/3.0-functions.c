// basic square function

#include <stdio.h>

    int square(int input); // function prototype
//  ^^^
//  means square returns `int` value.

int main(void) {

    for (int i = 0; i <= 10; ++i) {

        printf("%d ", square(i)); // function call
    }
    puts("");

}

int square(int input) { // function definition

    return input * input;

}
