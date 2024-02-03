# structered program development

- 1.0: counter-controlled while iteration.
  - sentinel-controlled while iteration.

## Converting Between Types Explicitly and Implicitly: Cast Operator

Dividing two `ints` results in **integer division**—any
fractional part of the calculation is **truncated** (that is, lost). You can produce a floating-
point calculation with integer values by first creating temporary floating-point num-
bers. C provides the unary **cast operator** to accomplish this task.

```C
double average = (double) total / counter;
```

uses the cast operator `(double)` to create a *temporary* floating-point copy of its operand,
`total`. The value stored in `total` is still an integer. Using a cast operator in this manner
is called **explicit conversion**. The calculation now consists of a floating-point value—
the temporary `double` version of `total`—divided by the `int` value stored in `counter`.

C requires the operand data types in arithmetic expressions only to be identical.
In mixed-type expressions, the compiler performs an operation called **implicit conversion**
on selected operands to ensure that they’re of the same type. For example, in
an expression containing the data types `int` and `double`, copies of `int` operands are
made and implicitly converted to type `double`. After we explicitly convert `total` to a
`double`, the compiler implicitly makes a `double` copy of `counter`, then performs float-
ing-point division and assigns the floating-point result to `average`.

## Secure C Programming

> ch3.13

### Arithmetic Overflow

`sum = int1 + int2;` can cause a overflow.

```C
#include <limits.h>
```

we should use constants `INT_MIN` and `INT_MAX` which in `limits.h`.
These are platform specific constants so this usage allows more portable programs.

see also:

- [the CERT website](https://wiki.sei.cmu.edu/confluence/display/c/)
- [INT32-C. Ensure that operations on signed integers do not result in overflow](https://wiki.sei.cmu.edu/confluence/display/c/INT32-C.+Ensure+that+operations+on+signed+integers+do+not+result+in+overflow)

### scanf_s and printf_s

`scanf_s` and `printf_s` are not portable among compilers.
