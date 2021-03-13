#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int guesses = 10;
    int number, guess_number, guesses_used;
    guesses_used = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Welcome to the number guessing game\n You have only 10 chances to guess the number. Good Luck!\n");

    while (guesses > 0){
        guesses--;
        guesses_used++;
        printf("\nGuess the number : \n");
        scanf("%d", &guess_number);
        if (guess_number > number){
            printf("\nThe number you have guessed is greater than the number to be guessed\n");
        }
        else if(guess_number<number){
            printf("\nThe number you have guessed is smaller than the number to be guessed\n");
        }
        else if(guesses==0){
            printf("\nYou lsot the game\n");
        }
        else{
            printf("\nYou have guessed the number. Congratulations!!\n");
            printf("\nYou have used %d number of guesses\n", guesses_used);
            break;
        }
        
        printf("\nYou have %d number of guesses left\n", guesses);
        
        
    }

}