/*
 * File: 4-print_alphabt.c
 * Auth: Axel Nay <8763@holbertonschool.com>
 */

#include <stdlib.h>
#include <time.h>

/**
 * This program will assign a random number to the variable n each time it is executed.
 * Complete the source code in order to print whether the number stored in the variable n is positive or negative.
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
printf(n, " is negative");
else if (n == 0)
printf(n, " is zero");
else if (n > 0)
printf(n, " is positive");

return (0);
}
