#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char userName[24];

    printf("What is your name?: ");
    scanf("%s", userName);
    printf("Hello, %s! Welcome to the Guessing Game!", userName);

   

    return 0;
}