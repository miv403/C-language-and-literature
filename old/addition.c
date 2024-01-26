//Fig 2.5
#include <stdio.h>

// an addition program with using scanf statement

int main(void)
{
    int integer0;
    int integer1;

    printf("enter first integer: ");
    scanf("%d", &integer0);
    printf("enter second integer: ");
    scanf("%d", &integer1);
    int sum;
    sum = integer0 + integer1;
    printf("the sum of %d and %d is %d\n",integer0, integer1, sum);
    
}

/*
% : conversion specifier
& : address operator:

we could use:
        int sum = integer0 + integer1;
    OR
        printf("sum is %d", integer0 + integer1)

*/

/*
OPERATORS

+
-
*
/
% mod

<
>
==
<=
>=
!=


*/