// fig06_08.c
// Treating character arrays as strings.
#include <stdio.h>
#define SIZE 20
// function main begins program execution
int main(void)
{
    char string1[SIZE] = "";           // reserves 20 characters
    char string2[] = "string literal"; // reserves 15 characters
    // prompt for string from user then read it into array string1
    printf("%s", "Enter a string (no longer than 19 characters): ");
    scanf("%19s", string1); // input no more than 19 characters
    // output strings
    printf("string1 is: %s\nstring2 is: %s\n", string1, string2);
    puts("string1 with spaces between characters is:");
    // output characters until null character is reached
    for (size_t i = 0; i < SIZE && string1[i] != '\0'; ++i)
    {
        printf("%c ", string1[i]);
    }
    puts("");
}