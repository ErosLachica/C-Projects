#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int numTries = 5;
    int guess;

    // Create time variable
    time_t t;
    
    // Initialize random number generator
    srand((unsigned) time(&t));

    // Generate number from 0-20 and store into int variable
    int randomNum = rand() % 21;
    printf("Debug, randomNum = %i\n", randomNum);


    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n\n");

    while (numTries != 0) {
        printf("You have %i tries left.\n", numTries);
        printf("Enter a guess: ");
        scanf("%i", &guess);
        
        if(guess == randomNum) {
            printf("Congratulations. You guessed it!");
            numTries = 0; // breaks out of while loop
        } else if (guess > randomNum) {
            printf("Sorry, %i is wrong. My number is less than that.\n\n", guess);
            numTries--;
        } else {
            printf("Sorry, %i is wrong. My number is greater than that.\n\n", guess);
            numTries--;
        }

        if(numTries == 0 && guess != randomNum) {
            printf("You have 0 tries left :(\nBetter luck next time!");
        }
    }

    return 0;
}