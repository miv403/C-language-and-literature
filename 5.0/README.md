# pointers

## defining a pointer

```C
int *pCount;
```

Pointers should be initialized when they’re defined, or they can be assigned a value.
A pointer may be initialized to `NULL`, 0 or an address:

- A pointer with the value `NULL` points to nothing. `NULL` is a symbolic constant
with the value 0 and is defined in the header
`<stddef.h>` (and several other headers, such as
`<stdio.h>`).
- Initializing a pointer to 0 is equivalent to
initializing it to `NULL`. The constant
`NULL` is preferred because it emphasizes that you’re
initializing a pointer rather
than a variable that stores a number. When 0 is
assigned, it’s first converted
to a pointer of the appropriate type. The value 0 is
the only integer value that
can be assigned directly to a pointer variable.

```C
int number = 31;

int *pNumber = &number;
```

### indirection/dereferencing operator `*`

```C
int number = 31;
int *pNumber = &number;

printf("%d", *pNumber);
```

Using \* in this manner is called **dereferencing a pointer**.

```C
int a = 7;
int *aPtr = &a; // set aPtr to the address of a

// &a is address of a
// *aPtr is the value of a
//  &a == aPtr
//  a == *aPtr
//  &*aPtr == *&aPtr complements each other
```

## pass-by-reference

using pointer parameter

```C
void cubeByReference(int *nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}
```

### Functions That Receive One-Dimensional Arrays

The compiler does not differentiate between a function
that receives a pointer and one that receives a
one-dimensional array. So, the function
must “know” when it’s receiving an array vs. a single
variable passed by reference.

When the compiler encounters a function parameter for
a one-dimensional array of the form
`int b[]`, **the compiler converts** the parameter to
the pointer notation `int *b`. The two forms are
**interchangeable**. Similarly, for a parameter of the
form `const int b[]` the compiler converts the
parameter to `const int *b`.

### incrementing a pointer

```C
void convertToUppercase(char *sPtr) {
    while (*sPtr != '\0' ) { // current character is not
    *sPtr = toupper(*sPtr); // convert to uppercase
    ++sPtr; // make sPtr point to the next character
}
}
```

### non-constant pointer to constant data

this function does not change any data but pointer is changable so the function can read all chars from char-array.

```C
void printCharacters(const char *sPtr) {
    // loop through entire string
    for (; *sPtr != '\0' ; ++sPtr) { // no initialization
        printf("%c", *sPtr);
    }
}
```

### Attempting to Modify a Constant Pointer to Constant Data

The least access privilege is granted by a constant
pointer to constant data. Such a pointer always points
to the same memory location, and the data at that
memory location cannot be modified. This is how an
array should be passed to a function that only
looks at the array’s elements using array subscript
notation and does not modify the elements.

defining constant pointer variable

```C
const int *const ptr = &x;
```

which is read right-to-left as “ptr is a constant pointer to an integer constant.

### constant array function parameter

actually arrays are always constant pointers

```C
void bubbleSort(int * const array, size_t size);
// equivalent of
void bubbleSort(int array[], size_t size);
```

## Demonstrating Pointer Subscripting and Offsets

```text
Array b printed with:
Array subscript notation
b[0] = 10
b[1] = 20
b[2] = 30
b[3] = 40

Pointer/offset notation where the pointer is the array name
*(b + 0) = 10
*(b + 1) = 20
*(b + 2) = 30
*(b + 3) = 40

Pointer subscript notation
bPtr[0] = 10
bPtr[1] = 20
bPtr[2] = 30
bPtr[3] = 40
Pointer/offset notation
*(bPtr + 0) = 10
*(bPtr + 1) = 20
*(bPtr + 2) = 30
*(bPtr + 3) = 40
```
