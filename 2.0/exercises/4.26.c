#include <stdio.h>
#include <limits.h>

// WARNING THIS PROGRAM CALCULATES THE PI WITH 2^64 ITERATIONS
// it won't stop until the world collapse or something idk


int main(void) {

    double pi = 4;
    unsigned long long int MAX = INT_MAX;               //<<<<<<<<< CHANGE THIS
    for (unsigned long long int i = 1; i <= MAX; ++i) {
        
        // 2i + 1
        // if i % 2 = 0 >>> 2i+1 = 1, 5, 9, ...  [+]
        // if i % 2 = 1 >>> 2i+1 = 3, 7, 11, ... [-]
        if (i % 2 == 0) {

            pi += (double) 4 / (2*i + 1);

        }
        else { // i % 2 == 1
            
            pi -= (double) 4 / (2*i + 1);
        }
        printf("%llu%s%10.64lf", i, ". ", pi);
        puts("");
    }
}