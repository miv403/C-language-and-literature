/* 
A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3,
4, 5, and 6 spots. After the dice have come to rest, the sum of the spots on 
the two upward faces is calculated. If the sum is 7 or 11 on the first throw,
the player wins. If the sum is 2, 3, or 12 on the first throw (called “craps”),
the player loses (i.e., the “house” wins). If the sum is 4, 5, 6, 8, 9, or 10 
on the first throw, that sum becomes the player’s “point.” To win, you must
continue rolling the dice until you “make your point.” The player loses by
rolling a 7 before making the point.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int roll(void);
void diceFace(int roll);
int sumCheck(int sum);

int main(void) {


    int counter = 0;
    int sum = 0;
    int point = 0;

    printf("roll a dice: ");
    int empt;
    scanf("%d", &empt);

    while(1) {

        counter++;
        //roll two dice:


        
        /* 
        player win:
            (1) i.  first throw: sum = 7 or 11
            (2) ii. first throw: sum = 4, 5, 6, 8, 9, 10
                    sum becomes ` the point` player continue
                    to rolling for make a point
        player lose:
            (3) i.  first throw: sum = 2, 3 or 12 ("craps")
            (4) ii. if sum 7 before making the point
        */

        sum = 0;

        srand(time(NULL));
        int roll1 = roll();
        diceFace(roll1);

        sleep(3);
        srand(time(NULL));
        int roll2 = roll();
        diceFace(roll2);
        sum = roll1 + roll2;
        
        

        if (counter == 1) {

            point = sumCheck(sum);

            if (point == 1) {
                printf("\nYOU WIN on first throw!(1)\n");
                break;
            } else if (point == 2 ){
                printf("\nCRAPS!\nYOU LOSE.(3)\n");
                break;
            } 
            printf("\nsum: %d point: %d\n", sum, point);
        
        } else { 

            printf("\nsum: %d point: %d\n", sum, point);

            if (sum == 7){
                printf("\nYOU LOSE.(4)\n");
                break;
            } else if (sum >= point) {
                printf("\nYOU WIN!(2)\n");
                break;
            }
            
        }

        /* end of while loop */
        printf("\nroll a dice: \n");
        int empt;
        scanf("%d", &empt);
    }

    puts("");
}

int roll(void) {
    
    
    return 1 + (rand() % 6);

}

int sumCheck(int sum) {

    // checks sum and game counter
    // then decides WIN or LOSE
    // first throw WIN returns 1
    // first throw LOSE returns 2

    switch (sum){
    case 7:
        /* WIN */
        return 1;
        break;
    case 11:
        /* WIN */
        return 1;
        break;
    case 2:
        /* CRAPS */
        return 2;
        break;
    case 3:
        /* CRAPS */
        return 2;
        break;
    case 12:
        /* CRAPS */
        return 2;
    default:
        return sum;
        break;
    }

}

/*  
..... ....* ....* *...* *...* *...*
..*.. ..... ..*.. ..... ..*.. *...*
..... *.... *.... *...* *...* *...*
*/
void diceFace(int roll) {

    switch (roll)
    {
    case 1:
        printf(".....\n");
        printf("..*..\n");
        printf(".....\n");
        break;
    case 2:
        printf("....*\n");
        printf(".....\n");
        printf("*....\n");
        break;
    case 3:
        printf("....*\n");
        printf("..*..\n");
        printf("*....\n");
        break;
    case 4:
        printf("*...*\n");
        printf(".....\n");
        printf("*...*\n");
        break;
    case 5:
        printf("*...*\n");
        printf("..*..\n");
        printf("*...*\n");
        break;
    case 6:
        printf("*...*\n");
        printf("*...*\n");
        printf("*...*\n");
        break;
    default:
        printf("hata????\n");
        break;
    }
    
}

/*
        printf("...\n.*.\n...\n"); // 1
        printf("..*\n...\n*..\n"); // 2
        printf("..*\n.*.\n*..\n"); // 3
        printf("*.*\n...\n*.*\n"); // 4
        printf("*.*\n.*.\n*.*\n"); // 5
        printf("*.*\n*.*\n*.*\n"); // 6

        printf("... .*. ... ");   // 1
        printf("..* ... *.. ");   // 2
        printf("..* .*. *.. ");   // 3
        printf("*.* ... *.* ");   // 4
        printf("*.* .*. *.* ");   // 5
        printf("*.* *.* *.* ");   // 6

        printf(".....   \n")
        printf("..*..   \n")
        printf(".....   \n")

        printf("...   ..*\n")
        printf(".*.   ...\n")
        printf("...   *..\n")

*/