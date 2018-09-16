#define CTEST_MAIN

#include <ctest.h>
#include <counter.h>
#include <inputchecker.h>
#include <numgenerator.h>

CTEST (Counter, BullsCorrect)
{
	int exp;
	int real;
	int numC, numP, *bulls, *cows;
	bulls = malloc (sizeof (int));
	cows = malloc (sizeof (int));
	numC = 2450;
	numP = 2460;
	exp = 3;
	counter (numC, numP, bulls, cows);
	real = *bulls;
	free (bulls);
	free (cows);
	ASSERT_EQUAL (exp, real);
}

CTEST (Counter, BullsCorrect2)
{
	int exp;
	int real;
	int numC, numP, *bulls, *cows;
	bulls = malloc (sizeof (int));
	cows = malloc (sizeof (int));
	numC = 2450;
	numP = 2450;
	exp = 4;
	counter (numC, numP, bulls, cows);
	real = *bulls;
	free (bulls);
	free (cows);
	ASSERT_EQUAL (exp, real);
}

CTEST (Counter, BullsCorrect3)
{
	int exp;
	int real;
	int numC, numP, *bulls, *cows;
	bulls = malloc (sizeof (int));
	cows = malloc (sizeof (int));
	numC = 2450;
	numP = 4025;
	exp = 0;
	counter (numC, numP, bulls, cows);
	real = *bulls;
	free (bulls);
	free (cows);
	ASSERT_EQUAL (exp, real);
}

CTEST (Counter, CowsCorrect)
{
	int exp;
	int real;
	int numC, numP, *bulls, *cows;
	bulls = malloc (sizeof (int));
	cows = malloc (sizeof (int));
	numC = 1234;
	numP = 4325;
	exp = 3;
	counter (numC, numP, bulls, cows);
	real = *cows;
	free (bulls);
	free (cows);
	ASSERT_EQUAL (exp, real);
}

CTEST (Counter, CowsCorrect2)
{
	int exp;
	int real;
	int numC, numP, *bulls, *cows;
	bulls = malloc (sizeof (int));
	cows = malloc (sizeof (int));
	numC = 1234;
	numP = 4321;
	exp = 4;
	counter (numC, numP, bulls, cows);
	real = *cows;
	free (bulls);
	free (cows);
	ASSERT_EQUAL (exp, real);
}

CTEST (Counter, CowsCorrect3)
{
	int exp;
	int real;
	int numC, numP, *bulls, *cows;
	bulls = malloc (sizeof (int));
	cows = malloc (sizeof (int));
	numC = 1234;
	numP = 1234;
	exp = 0;
	counter (numC, numP, bulls, cows);
	real = *cows;
	free (bulls);
	free (cows);
	ASSERT_EQUAL (exp, real);
}

CTEST (InputChecker, Correct)
{
	int exp;
	int real;
	char *input = malloc (sizeof (char));
	exp = 1234;
	strcpy (input, "1234");
	real = checkInput (input);
	ASSERT_EQUAL (exp, real);
}

CTEST (InputChecker, Incorrect)
{
	int exp;
	int real;
	char *input = malloc (sizeof (char));
	exp = 1234;
	strcpy (input, "s1234");
	real = checkInput (input);
	ASSERT_NOT_EQUAL (exp, real);
}

CTEST (InputChecker, Incorrect2)
{
	int exp;
	int real;
	char *input = malloc (sizeof (char));
	exp = 300;
	strcpy (input, "300");
	real = checkInput (input);
	ASSERT_NOT_EQUAL (exp, real);
}

CTEST (InputChecker, Incorrect3)
{
	int exp;
	int real;
	char *input = malloc (sizeof (char));
	exp = 300;
	strcpy (input, "10000");
	real = checkInput (input);
	ASSERT_NOT_EQUAL (exp, real);
}

CTEST (InputChecker, Incorrect4)
{
	int exp;
	int real;
	char *input = malloc (sizeof (char));
	exp = 0;
	strcpy (input, "/qw&123$$$^%@356gfh&");
	real = checkInput (input);
	ASSERT_EQUAL (exp, real);
}

CTEST (NumGenerator, Correct)
{
	int exp;
	int real;
	int *num = malloc (sizeof (int));
	int digits[4];
	generateNumber (num);
	digits[0] =  *num / 1000;
    digits[1] = (*num % 1000) / 100;
    digits[2] = (*num % 100) / 10;
    digits[3] =  *num % 10;
	exp = 1;
	if (digits[0] != digits[1] && digits [0] != digits [2] && digits[0] != digits[3] && digits[1] != digits[2] && digits[1] != digits[3] && digits[2] != digits[3])
		real = 1;
	else real = 0;
	ASSERT_EQUAL (exp, real);
}

CTEST (NumDivider, Correct)
{
	int exp;
	int real;
	int num;
	int *digits = malloc (sizeof (int)*4);
	exp = 1;
	num = 1204;
	divideNumber (num, digits);
	if (num / 1000 == digits[0] && num % 1000 / 100 == digits[1] && num % 100 / 10 == digits[2] && num % 10 == digits[3])
		real = 1;
	else real = 0;
	ASSERT_EQUAL (exp, real);
}
int main (int argc, const char** argv)
{
	return ctest_main (argc, argv);
}