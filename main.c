#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main()
{
    int searchedNum = 0;
    int usersNum = 0;
    char selectorYN = 0 ;
    int getch(void);
    int i;

    for(;;){
            srand(time(NULL));
            searchedNum = rand()%10;
        for( i=0; i<3; i++){

            for(;;){
                printf(" Enter positive value: ");
                int ok = scanf("%d", &usersNum);
                printf("%d Error!\n", ok);

                    if(usersNum < 0){
                    printf("Hey!It's negative num\n");
                    continue;
                    }
                    break;
            }

                if(usersNum == searchedNum){
                printf("\n Yaho");
                    break;
                }
                if(usersNum < searchedNum){
                printf("Bigger \n");
                }
                if (usersNum > searchedNum){
                printf("Lower\n");
                }
        }

                printf("\n Continue or exit Y/N");
                scanf("%s", &selectorYN);

                if(selectorYN == 'Y'){
                    return 0;
                }
     }
    return 0;
}


