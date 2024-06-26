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

for more `<math.h>` see *page 182.*

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

### enumeration

```C
enum Status {CONTINUE, LOST, WON};
//              0    ,  1  ,  2

enum Status gameStatus = CONTINUE; // may be CONTINUE, WON, or LOST
// then could be changed with depending status:
gameStatus = WON;
gameStatus = LOST;

```

## storage classes

**storage class:** determines an identifier’s *storage duration*, *scope* and *linkage*.

**storage-class specifiers:** `auto`, `extern`, `static`

**storage duration:** is the period during which an identifier exists in memory. Some exist briefly,
some are repeatedly created and destroyed, and others exist for the entire program execution.

**scope:** determines where a program can reference an identifier. Some can be referenced throughout a program, others from only portions of a program.

**linkage:** For a multiplesource-file program, an identifier’s *linkage* determines whether the identifier is known
only in the current source file or in any source file with proper declarations.

### storage duration

The `auto` keyword declares that a variable has automatic storage
duration. Such variables are created when program control enters the
block in which they’re defined. They exist while the block is active, and
they’re destroyed when program control exits the block.

Only variables can have automatic storage duration. **A function’s local**
variables—those declared in the parameter list or function body—**have automatic storage duration by default**, so the `auto` keyword is *rarely used*.
Automatic storage duration is a means of conserving
memory because local variables exist only when they’re
needed. We’ll refer to variables
with automatic storage duration simply as local
variables.

#### Static Storage Class

Keywords `extern` and `static` declare identifiers for variables and
functions with **static storage duration**. Identifiers of static storage
duration exist from the time at which the program begins execution
<u>until it terminates.</u>

For `static` variables, storage is allocated
and <u>**initialized only once**</u>, *before the program begins execution*. For
functions, the name of the function exists when the program begins
execution. However, even though these names exist from the start of
program execution, they are not always accessible. Storage duration and
scope (where a name can be used) are separate issues.

see *page 208*

more info [see](https://en.cppreference.com/w/c/language/storage_duration)

```C
static int count = 1; // this will initialized only once
                      // local variable
```

> [!NOTE] info
>All numeric variables of static storage duration are initialized to zero by default if you do not explicitly initialize them.

```C
static int number; // `number` will be zero.
printf("%d",number);
  // output: 0
```

### scoping

if a variable initialized **out of the `main` function** it will be a **global variable**.

any variable in a function (include `main`) will be a **local variable** for that function.
local variables initializes every time when function called unless the variable is a `static`.

~~the variable will be a *global variable* unless it initialized as a *local variable*. (of course this is valid when the *local* and *global variables* have same name)~~ not correct

## recursion

When called with a more complex problem, the function typically
divides the problem into two conceptual pieces:

- one that the function knows how to do, and
- one that it does not know how to do.

**base case:** simplest problem function actually know

the **recursion calls** (or *recursion steps*) should converge to base case each call.

### factorial

```C
unsigned long long int factorial(int number) {
  if (number <= 1) { // base case
    return 1;
  }
  else {             // recursive step
    return (number * factorial(number - 1));
  }
}
```

### fibonacci series

this function returns *nth* fibonacci number.

```C
unsigned long long int fibonacci(int n) {
  if (0 == n || 1 == n) { // base case
    return n;
  }
  else {                  // recursive step
    return fibonacci(n - 1) + fibonacci(n - 2);
}
}
```

<!-- markdownlint-configure-file { 
  "no-inline-html": {
    "allowed_elements": [
  "u",
  "br",
    ]
  }
} -->
