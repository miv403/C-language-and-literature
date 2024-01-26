/*
7. Write a C program to display multiple variables.
Sample Variables :
a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
Declaration :
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890; 

*/

#include <stdio.h>

int main(void)
{
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890; 
    printf("a + c = %d\n", a + c);
    printf("x + c = %f\n", x + c); // float x; char c; we need %f for floay
    printf("((int) + ax)= %ld\n", ((int)dx)+ ax); // double dx; long ax; we need %ld for long integer
    printf("a + x = %f\n", a + x); // int a; float x; it should be %f, its evaluates a long float value
    printf("s + b = %d\n", s + b); // short s; int b; 
    printf("ax + b %ld\n", ax + b); // long ax; int b; it evaluates a long integer value it should be %ld
    printf("s + c = %d\n", s + c); // short s; char c;
    printf("ax + c = %ld\n", ax + c); // long ax; char c; it evaluates a long integer value, the specifier should be %ld
    printf("ax + ux = %ld\n", ax + ux); // long ax; unsigned long ux; it evalutes a long unsigned integer, the specifier should be %ld
}

/*
a + c =  212                                                           
x + c = 89.134590                                                      
dx + x = 3.276183                                                      
((int) dx) + ax =  1234567891                                          
a + x = 127.134590                                                     
s + b =  16388                                                         
ax + b = 1234580235                                                    
s + c =  4130                                                          
ax + c = 1234567977                                                    
ax + ux = 3776135780


*/