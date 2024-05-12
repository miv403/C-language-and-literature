# structures, unions, bit manipulation, enumerations

## structures

```C
struct card {
    const char *face;
    const char *suit;
};

struct employee {
    char firstName[20];
    char lastName[20];
    int age;
    double hourlySalary;
};
```

`card` and `employee` are **structure tag**
the variable declared in braces are **members**

A struct type may not contain a variable of its own struct type (which
is a compilation error), but it may contain a pointer to that struct
type.

```C
struct employee {
    char firstName[20];
    char lastName[20];
    unsigned int age;
    double hourlySalary;
    struct employee *managerPtr; // pointer
};
```

A structure containing a member that’s a pointer to the *same* `struct`
type is a **self-referential structure**.
Self-referential structures are used to build linked data structures.

A structure definition does not reserve any space in memory. Rather, it
creates a new data type you can use to define variables. It’s like a
blueprint showing how to build instances of that struct. The following
statements reserve memory for variables using the type `struct card`:

```C
struct card myCard;
struct card deck[52];
struct card *cardPtr;
```

Variable `myCard` is a `struct card` object, array `deck` consists of 52
`struct card` objects, and `cardPtr` is a pointer to a `struct card`
object.

```C
struct card {
    const char *face;
    const char *suit;
} myCard, deck[52], *cardPtr;
```

Variables of a given structure type may also be defined by placing a
comma-separated list of variable names between the struct’s closing
brace and terminating semicolon.

Like arrays, you can initialize a `struct` variable via an initializer
list. For example, the following statement creates variable `myCard`
using type `struct card` and initializes member face to "Three" and
member suit to "Hearts":

```C
struct card myCard = {"Three", "Hearts"};
```

If there are fewer initializers than members, the remaining members are
automatically initialized to `0` or `NULL` (for pointer members).
Structure variables defined outside a function definition (i.e.,
externally) are initialized to `0` or `NULL` if they’re not explicitly
initialized in the external definition. You may also assign structure
variables to other structure variables of the same type or assign
values to individual structure members.

### accessing members

- **the structure member operator** (`.`), or **dot operator**, and
- **the structure pointer operator** (`->`), or **arrow operator**.

```C
printf("%s", myCard.suit); // displays Hearts
```

If the pointer `cardPtr` points to the `struct card` object
`myCard` we defined earlier, we can print its member suit with
the statement:

```C
printf("%s", cardPtr->suit); // displays Hearts
```

```text
cardPtr->suit <=> (*cardPtr).suit
```

dereferences the pointer and accesses the member suit using the
structure member operator (`.`). The parentheses are needed here because
the structure member operator (`.`) has higher precedence than the
pointer dereferencing operator (`*`). The structure pointer operator and
structure member operator have the highest precedence and group from
left-to-right, along with parentheses (for calling functions) and
brackets (`[]`) used for array indexing.
