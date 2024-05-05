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
int n[5] = {0}; // initializes entire array with zeros. [*]

int n[3] = {32, 27, 64, 18}; // COMPILATION ERROR ✕
//    ^n   |-----  k -----|     n < k

int n[] = {1, 2, 3, 4, 5}; // five-element int array

// compiler can calculate the size of array.
```

actually the compiler initializes n[0] with 0 in
this statement it could be like this:

```C
int n[5] = {1,2}
// n will be like this:
// {1, 2, 0, 0, 0}
```

> If there are fewer initializers than array
> elements, **the remaining elements** are initialized to 0.

### symbolic constant with `#define`

a *symbolic constant* can be used like this and like in `4.1.1`:

```C
#define SOME_THING 31
//                  ^ DO NOT USE `;`

#define SIZE 5

int n[SIZE] = {0}; //

```

> if you use semicolon after 31 the compiler replace all `SOME_THING` occurrences with `31;` which means program could fcked up.
> don't make that mistake if you don't want apply to [ioccc](https://www.ioccc.org/)

## strings

```C
char string1[] = "birinci";

// string1 = {'b','i','r','i','n','c','i','\0'}
```

there is eight `char` in this string-array. `\0` is *string-terminating* **null character**.

**reading a string with `scanf()`:** `scanf("%19s", string2);`

> [!NOTE] Note
> no need for `&` (**address operator**)
> You pass the array name to scanf with-
> out the & used with non-string variables. The & is
> normally used to provide scanf with a variable’s
> location in memory so that a value can be stored there.
<!---->
> [!WARNING] SECURE C PROGRAMMING
> `scanf` will read characters until
> *space, tab, newline, end-of-file indicator* encountered.
> if user types more characters than array's range could
> cause a crash or security vulnerability called
> *buffer overflow*. For this reason, we used the
> conversion specification `%19s`. This tells `scanf` to read
> a maximum of 19 characters, preventing it from writing
> characters into memory beyond the end of `string2`.

## passing array to functions

```C
int hourlyTemperatures[HOURS_IN_A_DAY]; // array definition

modifyArray(hourlyTemperatures, HOURS_IN_A_DAY); // giving array and its size to `modifyArray()` function.
```

arrays are pass-by-reference default.

> [!NOTE] Array's are addresses
> An array’s name evaluates to the address in memory of the array’s first
> element. Because the array’s starting address is passed, the called
> function knows precisely where the array is stored. So, any modifications
> the called function makes to the array elements change the values of the
> original array’s elements in the caller.

```C
#include <stdio.h>
// function main begins program execution
int main(void) {
    char array[5] = ""; // define an array of size 5
    printf("array = %p\n&array[0] = %p\n&array = %p\n",
    array,
    &array[0],
    &array);
}
```

**output:**

```console
array = 0031F930
&array[0] = 0031F930
&array = 0031F930
```

### function header

```C
void modifyArray(int b[], size_t size)
```

> [!WARNING] Array elements pass-by-value
> if we pass an array's element to a function. it will not change the original array's value. we should assign the new value to that position with `return`.

### using `const` in function header

When an array parameter is preceded by the `const`
qualifier, the function treats the array elements as constants.

```C
// in function tryToModifyArray, array b is const, so it cannot be
// used to modify its array argument in the caller
void tryToModifyArray(const int b[]) {
    b[0] /= 2; // error
    b[1] /= 2; // error
    b[2] /= 2; // error
}
```

Any attempt to modify an array element in the function body results in a
*compile-time error*.

## sorting arrays

### bubble sort

```C
// bubble sort
// loop to control number of passes
for (int pass = 1; pass < SIZE; ++pass) {
    // loop to control number of comparisons per pass
    for (size_t i = 0; i < SIZE - 1; ++i) {
        // compare adjacent elements and swap them if first
        // element is greater than second element
        if (a[i] > a[i + 1]) {
            int hold = a[i];
            a[i] = a[i + 1];
            a[i + 1] = hold;
        }
}
}
```

## searching arrays

### linear search

```C
// compare key to every element of array until the location is found
// or until the end of array is reached; return subscript of element
// if key is found or -1 if key is not found
int linearSearch(const int array[], int key, size_t size) {
    // loop through array
    for (size_t n = 0; n < size; ++n) {
        if (array[n] == key) {
            return n; // return location of key
        }
    }
    return -1; // key not found
}
```

### binary search

`low` and `high` represents the starting and ending indexes.

see `4.6-binarySearch.c` for proper usage.

```C
// function to perform binary search of an array
int binarysearch(const int b[], int key, size_t low, size_t high) {
   // loop until low subscript is greater than high subscript
   while (low <= high) {
      size_t middle = (low + high) / 2; // determine middle subscript

      // if key matches, return middle subscript
      if (key == b[middle]) {
         return middle;                                       
      }                                           
      else if (key < b[middle]) { // if key < b[middle], adjust high
         high = middle - 1; // next iteration searches low end of array
      }  
      else { // key > b[middle], so adjust low
         low = middle + 1; // next iteration searches high end of array
      }                                            
   } // end while

   return -1; // searchkey not found
} 
```

## two dimensional arrays

**initializing:**

```C
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```

```C
// function to output array with two rows and three columns
void printArray(int a[][3]) {
    // loop through rows
    for (size_t i = 0; i <= 1; ++i) {
        // output column values
        for (size_t j = 0; j <= 2; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n"); // start new line of output
    }
}
```

> [!NOTE] Array Parameter
> In a one-dimensional array parameter, the array brackets are empty.
> The first subscript of a multidimensional array is not required,
> but all subsequent subscripts are required. The compiler uses these subscripts
> to determine the locations in memory of a multidimensional array’s elements.
> All array elements are stored consecutively in memory regardless of the number
> of subscripts. In a two-dimensional array, the first row is stored in memory,
> followed by the second row.
>
> Providing the subscript values in a parameter declaration enables the compiler
> to tell the function how to locate an array element. In a two-dimensional
> array, each row is basically a one-dimensional array. To locate an element in a
> particular row, the compiler must know how many elements are in each row so
> that it can skip the proper number of memory locations when accessing the
> array. So, when accessing `a[1][2]` in our example, the compiler knows to skip
> the three elements of the first row to get to the second row (row 1). Then, the
> compiler accesses element 2 of that row.

## **`sizeof()` function:**

## secure C programming
