#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    printf("What is your name?: ");
    scanf("%*s");

    while (guess != secretNumber) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Correct! You guessed the number in %d attempts.\n", attempts);
        }
    }

    return 0;
}