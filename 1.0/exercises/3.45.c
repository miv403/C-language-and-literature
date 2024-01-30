#include <stdio.h>

int factorial (int N);
int kuvvet(int taban, int kuvvet);
int main(void) {

      ///////
     // 1 //
    ///////
    printf("%s", "1");
    for(unsigned int i = 0; i < 20; i++){printf("%s", "~");}
    puts("");

    printf("type in a non-negative integer: ");
    unsigned int input;
    scanf("%u", &input);
    int output = factorial(input);
    printf("%d%s%u%s", output, " = ", input, "!");
    puts("");

      ///////
     // 2 //
    ///////
    printf("%s", "2");
    for(unsigned int i = 0; i < 20; i++){printf("%s", "~");}
    puts("");

    double euler = 1;

    for (unsigned int i = 1; i <= 33; i++) {

        double fraction = (double) factorial(i);
        euler += 1 / fraction;
    }
    printf("%.10lf%s", euler, " ");
    puts("");
    
      ///////
     // 3 //
    ///////
    printf("%s", "3");
    for(unsigned int i = 0; i < 20; i++){printf("%s", "~");}
    puts("");

    printf("type in a non-negative integer (e^x): ");
    double input2;
    scanf("%lf", &input2);
    double x = input2;
    
    double eulerX = 1;
    for (unsigned int i = 1; i <= 40; i++) {

        double xi = (double) kuvvet(x, i);
        double fraction = (double) factorial(i);
        eulerX += xi / fraction;
        printf("%lf%s", eulerX, " ");

    }
    puts("");


}

int factorial (int N) {
    
    int output = 1;
    while (N > 0) {
        output *= N;
        N--;
    }
    return output;
}

int kuvvet(int taban, int kuvvet) {

    int output = 1;
    while (taban > 0){
        output *= taban;
        taban--;
    }
    return output;
}