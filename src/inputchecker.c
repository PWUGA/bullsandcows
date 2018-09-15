#include <inputchecker.h>

int checkInput (char *input)
{
	int num;
	sscanf (input, "%d", &num);
	if(num<1000)
	{
		printf ("\nWrong number. your num less than 1000. Try again: ");
		num=0;
	}
	else if(num>=10000 && num<=1000000)
	{
		printf ("\n\nPlease, enter a number less than 10000: ");
		num=0;
	}
	else if(num>=1000000)
	{
		printf ("\n\nBruh, i told you enter a number less than 10000: ");
		num=0;
	}
	return num;
}