#include <stdio.h>

int hanoi(int N, char pStart, char p2Move, char pTmp);
int main(void) {

    hanoi(5, 'A', 'C', 'B');

}

int hanoi(int N, char pStart, char p2Move, char pTmp) {

    if (N == 0)
        return 1;
    hanoi(N - 1, pStart, pTmp, p2Move);
    printf("%d%s%c%s%c", N,": ", pStart, " -> ", p2Move);
    puts("");
    hanoi(N - 1, pTmp, p2Move, pStart);

}