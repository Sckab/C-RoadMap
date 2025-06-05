/*
 *    This is the fourth day of the roadmap.  
 *    Today i'm gonna learn about loops in C.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    
    // variables
    int i = 0;
    int j = 10;
    int tries = 0;
    int maximumTries = 10;

    // loop that prints numbers from 0 to 9
    while (i < 10) {
        printf("%d\n", i);
        i++;
    }

    printf("\n");

    // loop similar to the previous one, but it operates at least one time
    do {
        printf("%d\n", j);
        j++;
    } while (j < 10);

    printf("\n");

    // loop that prints numbers from 0 to 9
    for (int k = 0; k < 10; k++) {
        printf("%d\n", k);
    }

    printf("\n");

    // mini-project, guess the number using rand
    int secretNumber = rand() % 101;

    printf("Welcome to the guess the number game.\n");
    printf("You have %d tries to guess the number.\n", maximumTries);

    while (tries < maximumTries) {
        int guess;
        printf("Guess the number (0-100): ");
        scanf("%d", &guess);
        if (guess == secretNumber) {
            printf("You guessed the number!\n");
            printf("It took you %d tries.\n", tries);
            break;
        } else if (guess < secretNumber) {
            printf("Too low!\n");
            printf("You have %d tries left.\n", maximumTries - tries);
            tries++;
        } else if (guess > secretNumber) {
            printf("Too high!\n");
            printf("You have %d tries left.\n", maximumTries - tries);
            tries++;
        }
    }

    return 0;

}

/*
 *    This day was pretty easy.
 *    I learned about loops and how to generate random numbers.
 */
