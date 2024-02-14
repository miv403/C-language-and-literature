#include <stdio.h>

// printf("%s", "*");
// printf("%s", " ");

int main(void) {

    unsigned int N; // range 1 to 19 && odd
    do {
        printf("%s", "type in: ");
        scanf("%u", &N);
    }while( N > 19 || N <= 1);

    puts("");
   
    for (unsigned int i = 1; i <= N; i += 2) {

        for (unsigned int j = N; j > i; j -= 2){ 
            printf("%s", " ");
        }
        for (unsigned int k = 0; k < i; ++k){
            printf("%s", "*");
        }
        puts("");
    }

    for (int i = 1; i <= (N - 2); i += 2) {

        for (int j = 1; j <= i; j += 2){
            printf("%s", " ");
        }
        for (int k = (N - 2); k >= i; --k) {
            printf("%s", "*");
        }
        
        puts("");
    }
}


/*
    *     1
   ***    3
  *****   5
 *******  7
********* 9
 *******
  *****
   ***
    *
*/