#include <stdio.h>

int main() {
    //assign variable

    int number, guess;
    number = 5;
    guess = 0;

    while (guess != number)
    {
        printf ("Guess the number");
        //& needed as it is a single number
        scanf("%d", &guess);
        //number++;
    }
    printf ("You have guessed the right number:");

    return (0);
}