#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints all possible combinations of single-digit numbers.
*
* Return: Always 0.
*/

int main(void)
{
int n = 48;
int m;
while (n < 57)
{
m = n + 1;
while (m < 58)
{
putchar((n % 10) + '0');
putchar((m % 10) + '0');
if (n == 8 && m == 9)
continue;
putchar(44);
putchar(32);
m++;
}
n++;
}
putchar('\n');

return (0);
}
