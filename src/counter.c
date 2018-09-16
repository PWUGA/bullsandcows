#include <counter.h>

void counter (int numC, int numP, int* bulls, int* cows)
{
	*bulls=0;
	*cows=0;
	if (numC==numP) 
		*bulls=4;
}