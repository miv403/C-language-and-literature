#include <stdio.h>
int main(void) {
int x = 0;
int y = 0;
// prompt user for input
printf("%s", "Enter two integers in the range 1-20: ");
scanf("%d%d", &x, &y); // read values for x and y
for (int i = 1; i <= y; ++i) { // count from 1 to y
for (int j = 1; j <= x; ++j) { // count from 1 to x
printf("%s", "@");
}
puts(""); // begin new line
}
}