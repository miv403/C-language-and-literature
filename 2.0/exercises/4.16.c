#include <stdio.h>

int A(void);
int B(void);
int C(void);
int D(void);

int main(void){

    puts("A");
    A();
    puts("");
    puts("B");
    B();
    puts("");
    puts("C");
    C();
    puts("");
    puts("D");
    D();

}


int A(void){

    for (unsigned int i = 1; i <=10; ++i) {

        for (unsigned int j = 1; j <= i; ++j) {

            printf("%s", "*");
        }
        puts("");
    }
}

int B(void) {

    for (unsigned int i = 10; i >= 1; --i) {
        
        for (unsigned int j = 1; j <= i; ++j) {
    
            printf("%s", "*");
        }
        puts("");
    }
}

int C(void) {

// boşluklar artarken
// yıldızlar azalacak

    for (unsigned int i = 1; i <= 10; ++i) {
        
        for (unsigned int k = 1; k < i; ++k){
            printf("%s", " ");
        }
        for (unsigned int j = 10; j > i; --j ){
            printf("%s", "*");
        }
        puts("");
    }
}

int D(void) {

    for (unsigned int i = 1; i <= 10; ++i) {
        
        for (unsigned int k = 10; k > i; --k){
            printf("%s", " ");
        }
        for (unsigned int j = 1; j < i; ++j ){
            printf("%s", "*");
        }
        puts("");
    }
    
}