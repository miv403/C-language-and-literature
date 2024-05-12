#include <stdio.h>

int main(void) {

    char b = fgetc(stdin);
    printf("2. %c\n", b);

    char a = getchar();
    printf("1. %c\n", a);

    fputc('3', stdout);
    puts("");

    putchar('1');

    puts("");
}