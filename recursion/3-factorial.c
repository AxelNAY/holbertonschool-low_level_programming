#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number
 * Return: factorial of n or -1 is n < 0.
 */

int factorial(int n);
{
int i = n - 1;
if (n == 0)
return (1);
else if (n < 0)
return (-1);
while (i > 0)
{
n = n * i;
i--;
}
n = n - 1;
return (n + factorial(0));
}
