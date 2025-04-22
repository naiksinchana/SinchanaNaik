#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int rand_no, rand_value, guess, attempts=0;
    srand(time(0));
    rand_value = rand() % 100 + 1;
    printf("Welcome to guessing game\n");
    printf("Guess a number between 1-99\n");

    do {
        printf("Enter your guess\n");
        scanf("%d", &guess);
        attempts++;

        if (guess < rand_value)
            printf("No is larger! Try again\n");
        else if (guess > rand_value)
            printf("No is smaller\n");
        else
            printf("Congrats! You guessed it in %d attempts\n", attempts);
    } while (guess != rand_value);

    return 0;
}

