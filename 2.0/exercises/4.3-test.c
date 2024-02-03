#include <stdio.h>
//e

// i have used this file for testing questions of exercise 4.3

// a.

int main(void){

    int sum = 1;
    for (int count = 1; count <= 99; count += 2){
       sum += count;
    }
    printf("%d", sum);
    puts("");
    // output: 2501 
}