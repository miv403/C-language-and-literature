// fig05_08.c
// Scoping.
#include <stdio.h>
void useLocal(void);       // function prototype
void useStaticLocal(void); // function prototype
void useGlobal(void);      // function prototype

int x = 1;                 // global variable

int main(void)
{
    int x = 5; // local variable to main
    printf("local x in outer scope of main is %d\n", x);

    {              // start new scope
        int x = 7; // local variable to new scope
        printf("local x in inner scope of main is %d\n", x);
    } // end new scope

    printf("local x in outer scope of main is %d\n", x);

    useLocal();       // useLocal has automatic local x
    useStaticLocal(); // useStaticLocal has static local x
    useGlobal();      // useGlobal uses global x
    useLocal();       // useLocal REINITIALIZES automatic local x
    useStaticLocal(); // static local x retains its prior value
    useGlobal();      // global x also retains its value
    printf("\nlocal x in main is %d\n", x);
}
// useLocal REINITIALIZES local variable x during each call
void useLocal(void)
{
    int x = 25; // initialized EACH TIME useLocal is called
    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    ++x;
    printf("local x in useLocal is %d before exiting useLocal\n", x);
}
// useStaticLocal initializes static local variable x only the first time
// the function is called; value of x is saved between calls to this
// function
void useStaticLocal(void)
{
    static int x = 50; // initialized ONCE
    printf("\nlocal static x is %d on entering useStaticLocal\n", x);
    ++x;
    printf("local static x is %d on exiting useStaticLocal\n", x);
}
// function useGlobal modifies global variable x during each call
void useGlobal(void)
{
    printf("\nglobal x is %d on entering useGlobal\n", x);
    x *= 10;
    printf("global x is %d on exiting useGlobal\n", x);
}

/* $output

local x in outer scope of main is 5
local x in inner scope of main is 7
local x in outer scope of main is 5
local x in useLocal is 25 after entering useLocal
local x in useLocal is 26 before exiting useLocal
local static x is 50 on entering useStaticLocal
local static x is 51 on exiting useStaticLocal
global x is 1 on entering useGlobal
global x is 10 on exiting useGlobal
local x in useLocal is 25 after entering useLocal
local x in useLocal is 26 before exiting useLocal
local static x is 51 on entering useStaticLocal
local static x is 52 on exiting useStaticLocal
global x is 10 on entering useGlobal
global x is 100 on exiting useGlobal
local x in main is 5
*/