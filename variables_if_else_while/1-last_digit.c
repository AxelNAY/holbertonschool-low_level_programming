#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %d is ", n);
last_digit = n % 10;
if (n > 5)
printf("%d and is greater than 5\n", last_digit);
else if (n == 0)
printf("%d and is 0\n", n);
else if ((n < 6) && (n != 0))
printf("%d and is less than 6 and not 0\n", last_digit);

return (0);
}
