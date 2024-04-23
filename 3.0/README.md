---
author: miv403
---
# functions

## math.h

all math library functions use floating-point values.

The C11 standard added complex-number capabilities via the `complex.h` header

| Function   | Description                                        | Example                                                              |
| ---------- | -------------------------------------------------- | -------------------------------------------------------------------- |
| sqrt(x)    | square root of x                                   | sqrt(900.0) is 30.0 <br/> sqrt(9.0) is 3.0                           |
| cbrt(x)    | cube root of x (C99 and C11 only)                  | cbrt(27.0) is 3.0 <br/> cbrt(-8.0) is -2.0                           |
| exp(x)     | exponential function ex                            | exp(1.0) is 2.718282 <br/> exp(2.0) is 7.389056                      |
| log(x)     | natural logarithm of x (base e)                    | log(2.718282) is 1.0 <br/> log(7.389056) is 2.0                      |
| log10(x)   | logarithm of x (base 10)                           | log10(1.0) is 0.0 <br/> log10(10.0) is 1.0 <br/> log10(100.0) is 2.0 |
| fabs(x)    | absolute value of x as a floating-point number     | fabs(13.5) is 13.5 <br/> fabs(0.0) is 0.0 <br/> fabs(-13.5) is 13.5  |
| ceil(x)    | rounds x to the smallest integer not less than x   | ceil(9.2) is 10.0 <br/> ceil(-9.8) is -9.0                           |
| floor(x)   | rounds x to the largest integer not greater than x | floor(9.2) is 9.0  <br/> floor(-9.8) is -10.0                        |
| pow(x, y)  | x raised to power y (x^y)                          | pow(2, 7) is 128.0 <br/> pow(9, .5) is 3.0                           |
| fmod(x, y) | remainder of x/y as a floating-point number        | fmod(13.657, 2.333) is 1.992                                         |
| sin(x)     | trigonometric sine of x (x in radians)             | sin(0.0) is 0.0                                                      |
| cos(x)     | trigonometric cosine of x (x in radians)           | cos(0.0) is 1.0                                                      |
| tan(x)     | trigonometric tangent of x (x in radians)          | tan(0.0) is 0.0                                                      |

## function definition

```C
'return-value-type' function-name(parameter-list) {
  statements
}
```

## function prototypes

The function prototype for maximum in `3.1-maximumFunction.c` (line 3) is;

```C
int maximum(int x, int y, int z); // function prototype
```

It states that maximum takes three arguments of type int and
returns an int result. Notice that the function prototype
(omitting the semicolon) is the same as the maximum definition’s
first line. We include parameter names in function prototypes for
documentation purposes. The compiler ignores these names,
so the following prototype also is valid:

```C
int maximum(int, int, int);
```

### Mixed-Type Expressions

The usual arithmetic conversion rules are handled by the compiler.
They apply to `mixed-type expressions`—that is, expressions
containing values of multiple data types. In such expressions, the
compiler makes temporary *copies* of values that need to be converted,
then converts the copies to the “highest” type in the expression—this
is known as `promotion`. For mixed-type expressions containing at
least one floating-point value:

- If one value is a `long double`, the other values are converted to `long double`.
- If one value is a `double`, the other values are converted to `double`.
- If one value is a `float`, the other values are converted to `float`.

If the mixed-type expression contains only integer types, then the
usual arithmetic conversions specify a set of integer promotion
rules.

| Data type              | `printf` conversion | `scanf` conversion specification specification |
| ---------------------- | ------------------- | ---------------------------------------------- |
| Floating-point types   |                     |                                                |
| long double            | %Lf                 | %Lf                                            |
| double                 | %f                  | %lf                                            |
| float                  | %f                  | %f                                             |
| Integer types          |                     |                                                |
| unsigned long long int | %llu                | %llu                                           |
| long long int          | %lld                | %lld                                           |
| unsigned long int      | %lu                 | %lu                                            |
| long int               | %ld                 | %ld                                            |
| unsigned int           | %u                  | %u                                             |
| int                    | %d                  | %d                                             |
| unsigned short         | %hu                 | %hu                                            |
| short                  | %hd                 | %hd                                            |
| char                   | %c                  | %c                                             |

## headers

| Header                                  | Explanation                                                                                                                                                                                                                                                                                                             |
| --------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Headers we use or discuss in this book:** |                                                                                                                                                                                                                                                                                                                         |
| `<assert.h>`                            | Contains information for adding diagnostics that aid program debugging.                                                                                                                                                                                                                                                 |
| `<ctype.h>`                             | Contains function prototypes for functions that test characters for certain properties, and function prototypes for functions that can be used to convert lowercase letters to uppercase letters and vice versa.                                                                                                        |
| `<float.h>`                             | Contains the floating-point size limits of the system.                                                                                                                                                                                                                                                                  |
| `<limits.h>`                            | Contains the integral size limits of the system.                                                                                                                                                                                                                                                                        |
| `<math.h>`                              | Contains function prototypes for math library functions.                                                                                                                                                                                                                                                                |
| `<signal.h>`                            | Contains function prototypes and macros to handle various conditions that may arise during program execution.                                                                                                                                                                                                           |
| `<stdarg.h>`                            | Defines macros for dealing with a list of arguments to a function whose number and types are unknown.                                                                                                                                                                                                                   |
| `<stdio.h>`                             | Contains function prototypes for the standard input/output library functions and information used by them.                                                                                                                                                                                                              |
| `<stdlib.h>`                            | Contains function prototypes for conversions of numbers to text and text to numbers, memory allocation, random numbers and other utility functions.                                                                                                                                                                     |
| `<string.h>`                            | Contains function prototypes for string-processing functions.                                                                                                                                                                                                                                                           |
| `<time.h>`                              | Contains function prototypes and types for manipulating the time and date.                                                                                                                                                                                                                                              |
| **Other headers:**                          |                                                                                                                                                                                                                                                                                                                         |
| `<errno.h>`                             | Defines macros that are useful for reporting error conditions.                                                                                                                                                                                                                                                          |
| `<locale.h>`                            | Contains function prototypes and other information that enables a program to be modified for the current locale on which it’s running. The locale notion enables the computer system to handle different conventions for expressing data such as dates, times, currency amounts and large numbers throughout the world. |
| `<setjmp.h>`                            | Contains function prototypes for functions that allow bypassing of the usual function call and return sequence.                                                                                                                                                                                                         |
| `<stddef.h>`                            | Contains common type definitions used by C.                                                                                                                                                                                                                                                                             |

## psudorandom number generator

### rand() function

`rand()` function is located in `stdlib.h` header.
this function is not secure. the return values of
the function are predictable.
`rand()` has a range of 0 to `RAND_MAX`. this upper
limit may differ between compilers.

the program 3.2 is printing same values each time.

```C

    // WE CAN USE THE UNIX TIME AS A SEED

//*******************************************//
    int seed = time(NULL);
//*******************************************//
    srand(seed); // seed the random-number generator

```

<!-- markdownlint-configure-file {
  "no-inline-html": {
    "allowed_elements": [
      "br",
    ]
  }
} -->
