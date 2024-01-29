#include <stdio.h>

int main(void) {
int x = 1;
int total = 0;

while (x <= 10) {
    int y = x * x;
    printf("%d\n", y);
    total += y;
    ++x;
} // end while
printf("Total is %d\n", total);
} // end main


/*
x = 1
total = 0
y = 1
p > 1
total = 1
x = 2
y = 4
p > 4
total = 5
x = 3
1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 385
*/