# arrays

```C
c[n] = a;
// a ϵ int
// n > 0
```

```C
    int c[5]; // 5-integer array
// the index range is 0-4
    int b[69]; // 69-integer array
    int x[31]; // 31- integer array
// index ranges are 0-68 and 0-30

    float k[52];
    double t[2];
```

## initializing

```C
int main(void) {

    int n[5]; // n is an array of five integers
    // set elements of array n to 0
    for (size_t i = 0; i < 5; ++i) {

        n[i] = 0; // set element at location i to 0
    }
    printf("%s%8s\n", "Element", "Value");
    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {

        printf("%7zu%8d\n", i, n[i]);
    }
}
```

```output
Element   Value
      0       0
      1       0
      2       0
      3       0
      4       0

```

**size_t:** recommended type for any variable representing an array's size.
it's defined in header `<stddef.h>` which is often included by other headers
such as `<stdio.h>`.
The **conversion specification** `%zu` is used to display `size_t` values.

more about [*size_t*](https://en.cppreference.com/w/c/types/size_t)

### other types of initializing

```C
int n[5] = {0}; // initializes entire array with zeros.

int n[3] = {32, 27, 64, 18}; // COMPILATION ERROR ✕
//    ^n   |-----  k -----|     n < k

int n[] = {1, 2, 3, 4, 5}; // five-element int array

// compiler can calculate the size of array.

```

### symbolic constant with `#define`

a constant be used in `4.1.1`.

```C
#define SOME_THING 31
//                  ^ DO NOT USE `;`
```

> if you use semicolon after 31 the compiler replace all `SOME_THING` occurrences with `31;` which means program could fcked up.
> don't make that mistake if you don't want apply to [ioccc](https://www.ioccc.org/)

a *symbolic constant* can be used like this:

```C
#define SIZE 5

int n[SIZE] = {0}; //

```
