#include <numgenerator.h>
void generateNumber (int *num, int *digits)
{
	do {
        *num = (rand() % 9000 + 1000);
        digits[0] =  *num / 1000;
        digits[1] = (*num % 1000) / 100;
        digits[2] = (*num % 100) / 10;
        digits[3] =  *num % 10;
    } while (digits[0] == digits[1] || digits[0] == digits[2] || digits[0] == digits[3] || digits[1] == digits[2] || digits[1] == digits[3] || digits[2] == digits[3]);
}