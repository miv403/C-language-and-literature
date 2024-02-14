#include <stdio.h>

// printf("%s", "*");
// printf("%s", " ");

int main(void) {

//    unsigned int N = 5;
//    printf("%s", "type in: ");
//    scanf("%u", &N);
    puts("");
   
    for (unsigned int i = 1; i <= 9; i += 2) {

        for (unsigned int j = 9; j > i; j -= 2){ 
            printf("%s", " ");
        }
        for (unsigned int k = 0; k < i; ++k){
            printf("%s", "*");
        }
        puts("");
    }

    for (int i = 1; i <= 7; i += 2) {

        for (int j = 1; j <= i; j += 2){
            printf("%s", " ");
        }
        for (int k = 7; k >= i; --k) {
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
 
    for (unsigned int i = 0; i < 5; ++i) { // rows
        
        for (unsigned int k = 5; k > i; --k){ 
            printf("%s", " ");
        }
        for (unsigned int j = 0; j <= i; ++j ){
            printf("%s", "*");
        }
        for (unsigned int l = 0; l < i; ++l) {
            printf("%s", "*");
        }
        puts("");
    }

    for (unsigned int i = 1; i <= 5; ++ i) {

        for (unsigned int k = 0; k <= i; ++k) {
            printf("%s", " ");
        }
        for (unsigned int j = 5; j > i; --j) {
            printf("%s", "*");
        }
        for (unsigned int l = 4; l > i; --l) {
            printf("%s", "*");
        }
    
        puts("");
    }

*/