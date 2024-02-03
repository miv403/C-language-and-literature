#include <stdio.h>

int main(void)
{
    int a, b, c;
    puts("Enter two numbers: ");
    scanf("%d%d", &b, &c);
    a = b * c;
    printf("%s","the product is ");
    printf("%d\n", a);
}
