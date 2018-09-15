#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
    printf ("Bulls and cows\n");
    printf ("Game rules.\n\nYour task is to guess the number that made the computer\n");
    printf ("-->Guessed the number in the right place: 1 bull. \n-->Guessed the number in the wrong place: 1 cow. \n\nOnce you have guessed the number, the game ends.\n");
}
