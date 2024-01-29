# structered program development

- 1.0: counter-controlled while iteration.
  - sentinel-controlled while iteration.

## Secure C Programming: Arithmetic Overflow

> ch3.13

`sum = int1 + int2;` can cause a over flow.

we should use constants `INT_MIN` and `INT_MAX` which in `limits.h`.
These are platform specific constants so this usage allows more portable programs.

see also:

- [the CERT website](https://wiki.sei.cmu.edu/confluence/display/c/)
- [INT32-C. Ensure that operations on signed integers do not result in overflow](https://wiki.sei.cmu.edu/confluence/display/c/INT32-C.+Ensure+that+operations+on+signed+integers+do+not+result+in+overflow)

## scanf_s and printf_s

`scanf_s` and `printf_s` are not portable among compilers.
