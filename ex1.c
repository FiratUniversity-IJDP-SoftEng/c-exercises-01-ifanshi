#include <stdio.h>

int main(void)
{
    // The secret number is set to 3
    int secret_number = 3;
    int guess;

    // Get the user's guess
    printf("Guess a number between 1 and 5: ");
    scanf("%d", &guess);

    // Check the guess
    if (guess == secret_number)
    {
        printf("You got it right\n");
    }
    else
    {
        printf("Sorry that was wrong The secret number was %d\n", secret_number);
    }

    return 0;
}
