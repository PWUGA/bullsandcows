#include <counter.h>

void counter (int numC, int numP, int* bulls, int* cows)
{
	*bulls=0;
	*cows=0;
	if (numC==numP) 
		*bulls=4;
	else
	{
		int *digitsC = malloc (sizeof (int)*4);
		int *digitsP = malloc (sizeof (int)*4);
		divideNumber (numC, digitsC);
		divideNumber (numP, digitsP);
		for (int i=0; i<4; ++i)
			for (int j=0; j<4; ++j)
			{
				if (digitsC[i]==digitsP[j])
				{
					if (i==j)
						++(*bulls);
					else
						++(*cows);
				}
			}
	}
}