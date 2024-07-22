#include <stdio.h>

#define MAX 3

int main(void) {

    char * names[MAX];

    for(int i = 0; i < MAX; i++) {

        char name[100];
        
        printf("Give me a name without spaces: ");
        scanf("%99s", &name[i]);

    }

    puts("these are the names;\n");

    for(int i = 0; i < MAX; i++) {

        printf("%s", names[i]);
        puts("");
    }

    return 0;

}