#include <stdio.h>
#include <stdlib.h>

int main() {
    char userName[24];
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    printf("What is your name?: ");
    scanf("%s", userName);
    printf("Hello, %s! Welcome to the Guessing Game!", userName);

   
    printf("\nI'm thinking of a number between 1 and 100.\n");

    while (guess != secretNumber) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secretNumber) {
           printf("Too low! Try again.\n");
     }  
        else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
     }  
        else {
            printf("Correct! You guessed it in %d attempts!\n", attempts);
        }
    }
    if (attempts > 7) {
        printf("Total guesses used: %d. You are below averaged on guesses (7)\n", attempts);
    } else if (attempts < 7) {
        printf("Total guesses used: %d. You are above averaged on guesses (7)\n", attempts);
    } 
    else {
        printf("Total guesses used: %d. You are exactly average on guesses (7)\n", attempts);
    }
    
    return 0;
}