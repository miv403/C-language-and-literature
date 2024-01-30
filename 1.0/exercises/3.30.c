#include <stdio.h>

  ///////
 // 1 //
///////
/*
int main(void) {

    unsigned int x = 11;
    unsigned int y = 9;

    if (x < 10)
    if (y > 10)
    puts("*****");
    else
    puts("#####");
    puts("$$$$$");
}
*/
/*
>>> x, y = 9, 11

>   *****
>   $$$$$

>>> x, y = 11, 9

>   $$$$$
*/

  ///////
 // 2 //
///////

int main(void) {


    unsigned int x = 11;
    unsigned int y = 9;

    if (x < 10) {
    if (y > 10)
    puts("*****");
    }
    else {
    puts("#####");
    puts("$$$$$");
    }
}

/*
>>> x, y = 9, 11

>   *****

>>> x, y = 11, 9

>   #####
>   $$$$$
*/