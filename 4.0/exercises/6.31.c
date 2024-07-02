#include <stdio.h>
#include <stdbool.h>

bool printPalindromes(char str[], int pivot, size_t size) {

    if(pivot != size) {
        printPalindromes(str, pivot + 1, size);
    }
    if(str[pivot - 1] != ' ')
        printf("%c", str[pivot - 1]);
}

bool testPalindromes(char str[], int pivot, size_t size) {

    if(pivot == size)
        return true;
    if(str[pivot] != str[size - 1]) 
        return false;
    if(pivot < size)
        return testPalindromes(str, pivot + 1, size - 1);

    return true;

}

int main(void) {

    char str[] = "able was i ere i saw elba";
    size_t size = 26;
    puts(str);
    printPalindromes(str, 0, size);

    puts("");
    if (testPalindromes(str, 0, size))
        puts("PALINDROME!");
    else
        puts("not palindrome.");
}

