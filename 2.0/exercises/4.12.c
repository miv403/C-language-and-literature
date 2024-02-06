#include <stdio.h>

int main(void) {

    unsigned int total = 0;
    for (unsigned int i = 2; i <= 30; i += 2) {

        total += i;
    }
    printf("%s%d", "total: ", total);
    puts("");
}