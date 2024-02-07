#include <stdio.h>

int main(void) {

    unsigned int i = 1;
    unsigned int j = 2;
    unsigned int k = 3;
    unsigned int m = 2;

    printf("%d", i == 1);
    puts("");

    printf("%d", j == 3);
    puts("");

    printf("%d", i >= 1 && j < 4);
    puts("");

    printf("%d", m <= 99 && k < m);
    puts("");

    printf("%d", j >= i || k == m);
    puts("");

    printf("%d", k + m < j || 3 - j >= k);
    puts("");

    printf("%d", !m);
    puts("");

    printf("%d", !(j - m));
    puts("");

    printf("%d", !(k > m));
    puts("");

    printf("%d", !(j > k));
    puts("");

}
