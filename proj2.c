#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int n, g, c=0;
    char again;
    srand(time(0));
    do{ 
        n= rand()%100 +1;
        printf("Let's Play a game \n I have generated a number between 1 to 100\n Can you guess the number?\n");
        c=0;
        do
        {printf("Enter Your Guess:");
        scanf("%d", &g);
        if (g>n){
            printf("Too High :(\n");
            c++;
        }
    else if (g<n){
        printf("Too Low :(\n");
        c++;
    }
    else{
            printf("Congratulations! You guessed the number in %d attempts :) \n", c);
        }
    }while (g!=n);
    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &again);
    
    } while (again == 'y' || again == 'Y');
    return 0;
}