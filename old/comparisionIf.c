// Fig 2.13
#include <stdio.h>

int main (void)
{
    int input0;
    int input1;
    printf("type in two integers:\n");

    scanf("%d %d", &input0, &input1);
    if (input0 == input1)
    {
        printf("%d and %d is equal.\n", input0, input1);
    }
    if (input0 < input1)
    {
        printf("%d and %d is equal.\n", input0, input1);
    }
    if (input0 > input1)
    {
        printf("%d and %d is equal.\n", input0, input1);
    }
    if (input0 != input1)
    {
        printf("%d and %d is equal.\n", input0, input1);
    }
   if (input0 <= input1)
    {
        printf("%d and %d is equal.\n", input0, input1);
    }
   if (input0 >= input1)
    {
        printf("%d and %d is equal.\n", input0, input1);
    }
}
