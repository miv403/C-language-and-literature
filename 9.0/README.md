# file processing

`FILE` structure: Opening a file returns a pointer to a `FILE` structure (defined in `<stdio.h>`) containing
information the program needs to process the file.

## file functions

Function `fgetc()`, like `getchar`, reads one character from the file specified by
its `FILE` pointer argument. For example, the call `fgetc(stdin)` reads one character
from the standard input stream. This call is equivalent to the call `getchar()`.

```C
char b = fgetc(stdin);
printf("%c\n", b);

char a = getchar();
printf("%c\n", a);
```

Function `fputc`, like `putchar`, writes the character in its
first argument to the file specified by the FILE pointer in
its second argument. For example, the function call
`fputc('a', stdout)` writes a character to the standard
output stream and is equivalent to `putchar('a')`.

```C
fputc('3', stdout);
putchar('1');
```

`fgets`: read a line of text from a file

`fputs`: write a line of text to a file

`fscanf` and `fprintf` file equivalents of `scanf` and `printf`

`fprintf`: The fprintf function is equivalent to printf,
but fprintf also receives a FILE pointer argument
specifying the file to which the data will be written.
Function fprintf can output data to
the standard output by using stdout as the FILE pointer
argument.

`fprintf(stdout, "string")` ≡ `printf("string")`

`fopen`: for opening a file

```C
FILE pFile = fopen("path/to/file", FILE_OPEN_MODE);
```

### file open modes

| mode | description                                                                                                                                        |
| ---- | -------------------------------------------------------------------------------------------------------------------------------------------------- |
| r    | Open an existing file for reading.                                                                                                                 |
| w    | Create a file for writing. If the file already exists, discard the current contents.                                                               |
| a    | Open or create a file for writing at the end of a file—this is for write operations that append data to a file.                                    |
| r+   | Open an existing file for update (reading and writing).                                                                                            |
| w+   | Create a file for reading and writing. If the file already exists, discard the current contents.                                                   |
| a+   | Open or create a file for reading and updating where all writing is done at the end of the file—that is, write operations append data to the file. |
| rb   | Open an existing binary file for reading.                                                                                                          |
| wb   | Create a binary file for writing. If the file already exists, discard the current contents.                                                        |
| ab   | Open or create a binary file for writing at the end of the file (appending).                                                                       |
| rb+  | Open an existing binary file for update (reading and writing).                                                                                     |
| wb+  | Create a binary file for update. If the file already exists, discard the current contents.                                                         |
| ab+  | Open or create a binary file for update. Writing is done at the end of the file.                                                                   |

#### C11 Exclusive Write Mode

C11 added the exclusive write mode,1 indicated with "wx", "w+x", "wbx" or "wb+x".
In exclusive write mode, fopen fails if the file already exists or cannot be created.
If your program successfully opens a file in exclusive write mode and the underlying
system supports exclusive file access, then only your program can access the file
while it’s open. If an error occurs while opening a file in any mode, fopen returns
`NULL`.

`fclose(pFile)`: to close file

`feof(stdin)`: determines whether the *end-of-file* indicator is set for *stdin*.
The feof function’s argument is
a FILE pointer to the file to test for the end-of-file indicator—stdin in this case. The
function returns a nonzero (true) value when the end-of-file indicator has been set;
otherwise, the function returns zero (false). This program’s while statement continues
executing until the user enters the end-of-file indicator.

### opening a file with `fopen()`

```C
FILE pFile = NULL;

if ((pYemekList = fopen("./file.txt", "w")) == NULL)
    puts("Dosya Acilamadi!");

// "w" is DESTRUCTIVE.

```

it's safer then using `FILE pFile = fopen("./file.txt", "w")`

### Resetting the File Position Pointer

When retrieving data sequentially from a file, a program normally reads from the
beginning of the file until the desired data is found. In some cases, a program must
process a file sequentially several times from the beginning. The statement

```C
rewind(cfPtr);
```

repositions the file position pointer to the beginning (byte 0) of the file pointed to by
cfPtr. The file position pointer is not really a pointer. It’s an integer indicating the byte
number of the next byte to read or write. This is sometimes referred to as the file offset.
The file position pointer is a member of the FILE structure associated with each file.
