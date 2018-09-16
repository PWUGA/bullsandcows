#include <game.h>

int game()
{
	srand (time (0));
	char *input = malloc (sizeof (char)*4);
	char c;
    int *numC = malloc (sizeof (int));
    int *numP = malloc (sizeof (int));
    int *bulls = malloc (sizeof (int));
    int *cows = malloc (sizeof (int));
	generateNumber (numC);
    while (1)
    {
    	printf ("\nEnter number: ");
        scanf ("%s", input);
        while (!(*numP=checkInput(input)))
        {
            free (input);
            input = malloc (sizeof (char)*4);
            scanf ("%s", input);
        }
        counter (*numC, *numP, bulls, cows);
        if (*bulls==4)
        	{
        		printf("\nYou won! Play again? (Y/n)");
        		scanf ("%c", &c);
        		scanf ("%c", &c);
        		if (!(c=='Y'||c=='y'))
        			return 1;
        		else generateNumber (numC);
        	}
        else
        	printf ("\nBulls: %d\nCows: %d", *bulls, *cows);
    }
    return 0;
}