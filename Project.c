//Project:-1 NUMBER GUESSING GAME
#include<stdio.h>

int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number= rand()%100+1;
    printf("**WELCOME TO THE NUMBER GUESSING GAME**\n");
//Generate a random number between 1 to 100
//printf("The number is %d:\n", number);

    do
    {
        printf("Guess the number between 1 to 100:");
        scanf("%d",&guess);
        if(guess>number) {
            printf("Lower number please!\n");
        }
        else if(guess<number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("YEAH!You guessed it in %d attempts.\n", nguesses);
        }
        nguesses++;
    } while(guess!=number);
    return 0;
}