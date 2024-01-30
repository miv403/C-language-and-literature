#include <stdio.h>

int main(void) {

    int size;
    printf("%s", "type in a size: ");
    scanf("%d", &size);
    
    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {

            if (i == (size - 1) || i == 0) {
                printf("%s", "*");
            }
            else {
                if (j == 0 || j == (size - 1)){

                    printf("%s", "*");
                }
                else {
                    printf("%s", " ");
                }
            }
        }
        puts("");
    }

}