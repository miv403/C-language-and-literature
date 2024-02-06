#include <stdio.h>

int main(void) {

    unsigned int total = 0;
    for (int i = 1; i <= 15; i += 2) {
        total += i;
    }
    printf("%s%d", "total: ", total);
    puts("");
}