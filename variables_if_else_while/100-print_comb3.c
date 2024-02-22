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
int n = 0;
int m;
while (n < 9)
{
m = n + 1;
while (m < 10)
{
putchar(n % 10 + 48);
putchar(m % 10 + 48);
if ((n == 8) && (m == 9))
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
