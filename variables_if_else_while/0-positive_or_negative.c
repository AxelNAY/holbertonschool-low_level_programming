/*
 * File: 0-positive_or_negative.c
 * Auth: Axel Nay <8763@holbertonschool.com>
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Will assign a random number to the variable n each time it is executed.
 * Print whether the number
 * Stored in the variable n is positive or negative.
 *                puzzle, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n < 0)
printf("%d is negative\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else if (n > 0)
printf("%d is positive\n", n);

return (0);
}
