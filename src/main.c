#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <numgenerator.h>
#include <inputchecker.h>
#include <counter.h>

int main() {
	srand (time (0));
    char *input = malloc (sizeof (char)*4);
    int *numC = malloc (sizeof (int));
    int *numP = malloc (sizeof (int));
    printf ("Bulls and cows\n");
    printf ("Game rules.\n\nYour task is to guess the number that made the computer\n");
    printf ("-->Guessed the number in the right place: 1 bull. \n-->Guessed the number in the wrong place: 1 cow. \n\nOnce you have guessed the number, the game ends.\n");
    generateNumber (numC);
    printf ("%d", *numC);
    scanf ("%s", input);
    while (!(*numP=checkInput(input)))
    {
        free (input);
        input = malloc (sizeof (char)*4);
        scanf ("%s", input);
    }
    return 0;
}
