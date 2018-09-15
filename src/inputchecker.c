#include <inputchecker.h>

char checkInput (int num)
{
	char f=0;
	if (num>=1000&&num<=9999)
	{
		f=1;
	}	
	else if(num<1000)
	{
		printf ("\nWrong number. your num less than 1000. Try again: ");
	}
	else if(num>=10000 && num<=1000000)
	{
		printf ("\n\nPlease, enter a number less than 10000: ");
	}
	else if(num>=1000000)
	{
		printf ("\n\nBruh, i told you enter a number less than 10000: ");
	}
	return f;
}