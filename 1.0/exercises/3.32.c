#include <stdio.h>

int main(void) {

    int size;
    do {
        printf("%s", "type in size: ");
        scanf("%d", &size);
    } while (size < 1 || size > 20);

    int row = 0;
    while (row < size) {

        int column = 0;
        while (column < size) {
            printf("%s", "*");
            ++column;
        }
        puts("");
        ++row;

    }
}