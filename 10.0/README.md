# data structures

## self-referential structures

```C
struct node {
    int data;
    struct node * nextPtr;
};
```
```text

|----| |----|       |----| |-\-/-|
| 15 | |  o-|-----> | 10 | |  X  |
|----| |----|       |----| |-/-\-|
                            NULL
```

## dynamic memory management

### `malloc()`

1. obtain more memory at execution time to hold new nodes
2. release memory no longer needed.

request memory at execution time 

```C
newPtr = malloc(sizeof(struct node));
```

`malloc()` returns `void *` pointer to the allocated memory.

> [!WARNING]
> the memory is note guaranteed to be initialized. if no memory available,
> `malloc` return `NULL` always test `NULL` before using it.

### free()

```C
free(newPtr);
```
After deallocating memory, set the pointer to `NULL`. This prevents
accidentally referring to that memory, which may have already been allocated
for another purpose. Not freeing dynamically allocated memory when it’s no 
longer needed can cause the system to run out of memory prematurely. This is 
sometimes called a *memory leak.* Referring to memory that has been freed is 
an error that typically causes a program to crash. Freeing memory that you did 
not allocate dynamically with `malloc` is an error.

## linked lists

```text
|---|
| O | startPtr
|-|-|
  |   |---|---|   |---|---|           |---|\-/|
  ᪳↳   | 3 | O===> | 5 | O===> ... ==> | 3 | X |
      |---|---|   |---|---|           |---|/-\|
```

## stacks

a stack can be implemented as a constrained version of a *linked list*.
new nodes could be added and existing ones be removed only at the top.

```text
 |---|   |---|---|   |---|---|           |---|\-/|
 | O===> | 3 | O===> | 5 | O===> ... ==> | 3 | X |
 |---|   |---|---|   |---|---|           |---|/-\|

 stackPtr
```
`stackPtr` points to the stack's **top** element.

## queues

only the node at the **head** (front) of the queue can be removed
and can only be added at the **tail** (back) of the queue.

```text
 headPtr                         tailPtr
  |---|                           |---|
  | O |                           | O |
  |-‖-|                           |-‖-|
    ⇓                               ⇓
  |---|---|   |---|---|           |---|\-/|
  | 3 | O===> | 5 | O===> ... ==> | 3 | X |
  |---|---|   |---|---|           |---|/-\|

```
## trees

**root node**: first node
**left child**: first node of **left subtree**
**right child**: first node of the **right subtree**
a given node's children are called **sibling**
**leaf node**: a node without children

> [!WARNING]
> *leaf node's* links should be `NULL`

```text
                      +-----+
                      |  |  |root node pointer
                      |  |  |
                      +--|--+
                         |
                +----|-------|----+
                |    |       |    |
                /--  |    B  | --\|
            /---+----|-------|-------\
          <-                          -->
   \-|--------|\---+          +----|--------\---+
    \|    A   | \  |          |/-  |   D     \  |
     \--------|  \-+         /-----|--------  \-+
                           /-
                +---|----<--|-----+
                |\  |    C  | \   |
                | \ |       |  \  |
                +  \|-------|-- \-+
```

### binary search tree

a **binary search tree**  contains unique values which has the characteristic
that the values in any *left* subtree are less than the value in its **parent node**.
and the values in any *right* subtree are greater than the value in its parent node.

```text
               _47_
             _/    \_
            /        \
          25          77
        /    \       /
       11    43     65
            /  \    /
           31  44  68
```

