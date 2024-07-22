#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>
#include<stdbool.h>

#define MAX_CHOICE_LEN 10

int getWinner(char playerChoice[], char computerChoice[]){
    if (strcmp(playerChoice, computerChoice) == 0)
    {
        return 0; // tie
    }

    else if ((strcmp(playerChoice, "rock") == 0 && strcmp(computerChoice, "paper") == 0) ||
            (strcmp(playerChoice, "paper") == 0 && strcmp(computerChoice, "scissor") == 0) ||
            (strcmp(playerChoice, "scissor") == 0 && strcmp(computerChoice, "rock") == 0))
    {
        return 2;   // The computer is the winner.
    }   else
    {
        return 1;   // THe player is the winner.
    }
}   // This was the code for deciding the winner.


void Game(){
    char playerChoice[MAX_CHOICE_LEN];
    char computerChoice[MAX_CHOICE_LEN];
    const char* choices[] = {"rock", "paper", "scissor"};

    printf("Enter your choice: ");
    scanf("%s", playerChoice);

    srand(time(NULL));
    int randomIndex = rand() % 3;
    strcpy(computerChoice, choices[randomIndex]);

    printf("Computer choice: %s\n", computerChoice);

    int winner = getWinner(playerChoice, computerChoice);

    if (winner == 1)
    {
        printf("Conragtulations, You win!!!");
    }
    
    else if (winner == 2)
    {
        printf("Computer wins!!!, Try again!");
    }   else
    {
        printf("Try again!!!\n");
    }

}

void main(){
    Game();
}