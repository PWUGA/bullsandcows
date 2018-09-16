#include <stdio.h>
#include <game.h>

int main() {
    printf ("Bulls and cows\n");
    printf ("Game rules.\n\nYour task is to guess the number that made the computer\nThe number is more than 999 but less than 10000\n");
    printf ("-->Guessed the number in the right place: 1 bull. \n-->Guessed the number in the wrong place: 1 cow. \n\nOnce you have guessed the number, the game ends.\n");
    game();
    return 0;
}
