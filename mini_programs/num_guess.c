#include <stdio.h>

int main() 
{
    int guess, number = 7;

    printf("Guess the number: ");
    scanf("%d", &guess);

    if (guess == number)
        printf("Correct!");
    else
        printf("Wrong!");

    return 0;
}
