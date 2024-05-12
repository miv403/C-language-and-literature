#include <stdio.h>
#include <math.h>

void roundToInteger(double *number);
void roundToTenths(double *number);
void roundToHundreths(double *number);
void roundToThousandths(double *number);

int main(void) {

    double x;
    printf("%s", "type in a integer: ");
    scanf("%lf", &x);
    roundToInteger(&x);
    printf("%s%.5lf", "roundToInteger: ", x);
    puts("");
    
    printf("%s", "type in a integer: ");
    scanf("%lf", &x);
    roundToTenths(&x);
    printf("%s%.5lf", "roundToTenths: ", x);
    puts("");
    
    printf("%s", "type in a integer: ");
    scanf("%lf", &x);
    roundToHundreths(&x);
    printf("%s%.5lf", "roundToHundreths: ", x);
    puts("");
    
    printf("%s", "type in a integer: ");
    scanf("%lf", &x);
    roundToThousandths(&x);
    printf("%s%.5lf", "roundToThousandths: ", x);
    puts("");
    
}

void roundToInteger(double *number) {
    *number = floor( *number + 0.5);
}
void roundToTenths(double *number) {
    *number = floor( *number * 10 + 0.5) / 10;
}
void roundToHundreths(double *number) {
    *number = floor( *number  * 100 + 0.5) / 100;
}
void roundToThousandths(double *number) {
    *number = floor( *number  * 1000 + 0.5) / 1000; 
}