# program control

## summary

### data types in C

further reading: [arithmetic types](https://en.cppreference.com/w/c/language/arithmetic_types)

### formattin floats

```C
// see 2.0.2-loops-compoundInterest.c
        printf("%4d%21.2f\n", year, amount);

//      %21.2f
//       21: use 21 characters; .2 use 2 digits after floating point
```

### compilation with other libraries

```C
#include <stdio.h>
#include <math.h>
```

```console
gcc -lm 1.0.2-loops.c
```

### logical operators in C

| Operators                             | Grouping      | Type           |
| ------------------------------------- | ------------- | -------------- |
| ++ (postfix) -- (postfix)             | right to left | postfix        |
| + - ! ++ (prefix)  -- (prefix) (type) | right to left | unary          |
| * / %                                 | left to right | multiplicative |
| + -                                   | left to right | additive       |
| < <=  >  >=                           | left to right | relational     |
| ==  !=                                | left to right | equality       |
| &&                                    | left to right | logical AND    |
| \|\|                                  | left to right | logical OR     |
| ?:                                    | right to left | conditional    |
| = += -= *= /= %=                      | right to left | assignment     |
| ,                                     | left to right | comma          |

### _Bool data type

`#include <stdbool.h>`

### secure C programming

#### Checking Function scanf’s Return Value

```C
// ch4.12

#include <stdio.h>

// checking scanf's succesfull inputs with assigning its return value to a int variable.

int main(void){

    int number1, number2;
    int check = 2;
    puts("type in number1 & number2 respectively");
    check = scanf("%d%d", &number1, &number2);
    printf("check: %d\nnumber1: %d\nnumber2: %d\n", check, number1, number2);
}
```
