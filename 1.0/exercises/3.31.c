#include <stdio.h>

int first(int x, int y);
int second(int x, int y);
int third(int x, int y);
int fourth(int x, int y);

int main(void){
    
    int x = 5;
    int y = 8;
    puts("1~~~~~~~~~~~~~~~~~~~~~~~~~");
    first(x, y);
    puts("2~~~~~~~~~~~~~~~~~~~~~~~~~");
    second(x, y);
    puts("3~~~~~~~~~~~~~~~~~~~~~~~~~");
    third(x, y);
    puts("4~~~~~~~~~~~~~~~~~~~~~~~~~");
    fourth(x, 7);
}

  ///////
 // 1 //
///////
int first(int x, int y) {

    if (y == 8)
    if (x == 5)
        puts("@@@@@");
    else {
        puts("#####");
    }
    puts("$$$$$");
    puts("&&&&&");
    return 0;
}

  ///////
 // 2 //
///////
int second(int x, int y) {

    if (y == 8) {
        if (x == 5)
            puts("@@@@@");
    }
    else{
        puts("#####");
        puts("$$$$$");
        puts("&&&&&");
    }
    return 0;
}

  ///////
 // 3 //
///////
int third(int x, int y) {

    if (y == 8){
        if (x == 5)
            puts("@@@@@");
    }
    else {
        puts("#####");
        puts("$$$$$");
    }
    puts("&&&&&");

}

  ///////
 // 4 //
///////
int fourth(int x, int y) {
    //x = 5 and y = 7
    if (y == 8){
        if (x == 5)
            puts("@@@@@");
    }
    else{
        puts("#####");
        puts("$$$$$");
        puts("&&&&&");
    }
}