#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <process.h>
int main()
{
    int guess, num, bleh = getpid();
    srand(time(0) ^ bleh);
    num = (rand() % 1000) + 1;
    do
    {
        printf("Guess the number:");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("LOWER\n");
        }
        else if (guess < num)
        {
            printf("HIGHER\n");
        }
    }
    while (guess != num);
    printf("YOU GUESSED IT RIGHT!");

    return 0;
}
