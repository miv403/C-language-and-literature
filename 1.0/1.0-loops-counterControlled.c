// fig04_01.c
// ch4.3: Counter-controlled iteration.

/*
#include <stdio.h>

int main(void)
{
    int counter = 1;

    while (counter <= 5)
    {
        printf("%d ", counter);
        ++counter;
    }
    puts("");
}
*/

// use always integer counter values. floting-point number are imprecise
/* 

counter = counter + 1
counter += 1
++counter: pre-intement
counter++: post-increment

*/

// fig04_02.c
// ch4.3: Counter-controlled iteration with the for statement.

#include <stdio.h>

int main(void)
{
    // we can make all of them in one line with for loops
    // counter variable is local variable.
    // we cannot access it from outside of for loop's body.


    for (int counter=1; counter <= 5; ++counter)
//  keyword
//       counter variable
//       name           loop-contination
//                      condition       increment of
//                                      control value

    {
        printf("%d ", counter);
    }
    puts("");
}
/*
for (initialization; loopContinuationCondition; increment)
   
    //all of them are optional you can create infinite loop without using them.
{
    statement
}
*/

// off-by-one error: using i<5 instead i<=5 for iterating 5 times. it's a logic error.