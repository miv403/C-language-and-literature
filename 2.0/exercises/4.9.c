#include <stdio.h>

int main(void) {

    int count, integerX, total = 0;
    printf("%s", "enter the count of integers to be summed: ");
    scanf("%d", &count);

    for (int i = 1; i <= count; ++i) {

        printf("%d%s", i, ". enter a integer to be summed: ");
        scanf("%d", &integerX);
        total += integerX;
        printf("%s%d", "total: ", total);
        puts("");
    }
}
