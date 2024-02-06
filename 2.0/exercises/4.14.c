#include <stdio.h>

int main(void) {
    
    unsigned int n;
    unsigned int nFact = 1;
    printf("%s", "type in n: ");
    scanf("%u", &n);

    for (unsigned int i = n; i > 0; --i) {

        nFact *= i;
    }
    printf("%s%u", "n! = ", nFact);
    puts("");
}