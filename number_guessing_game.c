#include <stdio.h>

int main()
{
    int secretNumber = 42; // Step 1: Fixed secret number
    int maxAttempts = 5;   // Step 2: Maximum attempts
    int guess;
    int attempts;

    printf("Welcome to the Number Guessing Game!\n");
    printf("You have %d attempts to guess the correct number.\n\n", maxAttempts);

    // Step 3: Loop for limited attempts
    for (attempts = 1; attempts <= maxAttempts; attempts++)
    {
        printf("Attempt %d: Enter your guess: ", attempts);

        // Step 5: Read user input
        scanf("%d", &guess);

        // Step 6 & 7: Compare guess
        if (guess == secretNumber)
        {
            printf("Congratulations! You guessed the correct number.\n");
            return 0; // Exit program on success
        }
        // Step 8: Guess too high
        else if (guess > secretNumber)
        {
            printf("Hint: Try a smaller number.\n\n");
        }
        // Step 9: Guess too low
        else
        {
            printf("Hint: Try a larger number.\n\n");
        }
    }

    // Step 10: Failure message
    printf("Sorry! You've used all attempts.\n");
    printf("The correct number was %d.\n", secretNumber);

    return 0;
}
