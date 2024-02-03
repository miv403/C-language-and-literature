# intro to C programming

this directory contains my notes.

## summary

### compiling

```console
gcc -std=c18 0.0-helloWorld.c -o 0.0-helloWorld-0
```

### printf()

#### escape characters

[source](https://en.cppreference.com/w/cpp/language/escape#Escape%20sequences)

| Escape sequence                  | Description                                                | Representation                                              |
|----------------------------------|------------------------------------------------------------|-------------------------------------------------------------|
| Simple escape sequences          |                                                            |                                                             |
| \'                               | single quote                                               | byte 0x27 in ASCII encoding                                 |
| \"                               | double quote                                               | byte 0x22 in ASCII encoding                                 |
| \?                               | question mark                                              | byte 0x3f in ASCII encoding                                 |
| \\                               | backslash                                                  | byte 0x5c in ASCII encoding                                 |
| \a                               | audible bell                                               | byte 0x07 in ASCII encoding                                 |
| \b                               | backspace                                                  | byte 0x08 in ASCII encoding                                 |
| \f                               | form feed - new page                                       | byte 0x0c in ASCII encoding                                 |
| \n                               | line feed - new line                                       | byte 0x0a in ASCII encoding                                 |
| \r                               | carriage return                                            | byte 0x0d in ASCII encoding                                 |
| \t                               | horizontal tab                                             | byte 0x09 in ASCII encoding                                 |
| \v                               | vertical tab                                               | byte 0x0b in ASCII encoding                                 |
| Numeric escape sequences         |                                                            |                                                             |
| \nnn                             | arbitrary octal value                                      | code unit nnn (1~3 octal digits)                            |
| \o{n...} (since C++23)           |                                                            | code unit n... (arbitrary number of octal digits)           |
| \xn...                           | arbitrary hexadecimal value                                | code unit n... (arbitrary number of hexadecimal digits)     |
| \x{n...} (since C++23)           |                                                            |                                                             |
| Conditional escape sequences[1]  |                                                            |                                                             |
| \c                               | Implementation-defined                                     | Implementation-defined                                      |
| Universal character names        |                                                            |                                                             |
| \unnnn                           | arbitrary Unicode value; may result in several code units  | code point U+nnnn (4 hexadecimal digits)                    |
| \u{n...} (since C++23)           |                                                            | code point U+n... (arbitrary number of hexadecimal digits)  |
| \Unnnnnnnn                       |                                                            | code point U+nnnnnnnn (8 hexadecimal digits)                |
| \N{NAME} (since C++23)           | arbitrary Unicode character                                | character named by NAME (see below)                         |

#### conversion specifiers

[source](https://en.cppreference.com/w/c/io/fprintf#Parameters)

| Conversion Specifier |                                               |
| -------------------- | --------------------------------------------- |
| %                    | percent `%` symbol                            |
| c                    | single character                              |
| s                    | character string                              |
| d i                  | signed integer                                |
| o                    | unsigned integer to octal                     |
| x X                  | unsigned integer to hexadecimal               |
| u                    | unsigned integer                              |
| f F                  | floating-point number to decimal              |
| e E                  | floating-point number to decimal exponent     |
| a A  (C99)           | floating-point number to hexadecimal exponent |
| p                    | pointer                                       |

### scanf()

```C
int foo;
scanf("%d", &foo);
//          ^ 
```

the `&` is an **address operator**.

### some operators in C

#### arithmetical

- `+`
- `-`
- `*`
- `/`
- `% mod`

#### comparision

- `<`
- `>`
- `==`
- `<=`
- `>=`
- `!=`

### secure programming

> ch2.7 secure programming

just use `puts()` when you need `printf("\n")`

- `printf("merhaba\n"); // instead`

    ```console
    $ ./a.out
    > merhaba
    >  
    ```

- `puts("merhaba"); // use this`

    ```console
    $ ./a.out
    > merhaba
    >  
    ```

- `printf("merhaba "); // instead`

    ```C
    printf("%s", "merhaba ");
        //use this
    ```
