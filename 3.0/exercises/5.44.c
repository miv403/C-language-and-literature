#include <stdio.h>
int mystery(int a, int b); // function prototype
int main(void)
{
    printf("%s", "Enter two positive integers: ");
    int x = 0; // first integer
    int y = 0; // second integer
    scanf("%d%d", &x, &y);
    printf("The result is %d\n", mystery(x, y));
}
// Parameter b must be a positive integer
// to prevent infinite recursion
int mystery(int a, int b)
{
    // base case
    if (b < 0 && a > 0) {
        a = a + b;
        b = a - b;
        a = a - b;
    }else if (b < 0 && a < 0) {
        a = -a;
        b = -b;
    }
    if (1 == b) {
        return a;
    } else { // recursive step
        return a + mystery(a, b - 1);
    }
}
/* 
- * - = +
+ * - = -
- * + = -
*/