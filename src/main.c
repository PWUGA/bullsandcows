#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <numgenerator.h>
#include <inputchecker.h>

int main() {
	srand(time(0));
    int *numC = malloc (sizeof (int));
    int *numP = malloc (sizeof (int));
    int *digitsC = malloc (sizeof (int)*4);
    printf ("Bulls and cows\n");
    printf ("Game rules.\n\nYour task is to guess the number that made the computer\n");
    printf ("-->Guessed the number in the right place: 1 bull. \n-->Guessed the number in the wrong place: 1 cow. \n\nOnce you have guessed the number, the game ends.\n");
    generateNumber (numC, digitsC);
    printf ("%d %d %d %d %d", *numC, digitsC[0], digitsC[1], digitsC[2], digitsC[3]);
    scanf("%d", numP);
    while (!checkInput(*numP))
    {
        scanf("%d", numP);
    }
    return 0;
}
