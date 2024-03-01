#include "main.h"
#include <stdio.h>

/**
* print_number - print a number.
*
* @n: integer n
*/

void print_number(int n)
{
int i;
unsigned int dec;
int mult = 1;
unsigned int abs;
int c = 0;
if (n == 0)
putchar(48);
else if (n < 0)
{
putchar(48);
n = n * -1;
}
abs = n;
dec = n;
while (dec > 0)
{
dec = dec / 10;
c++;
}
for (i = 0; i < c - 1; i++)
mult = mult * 10;
for (i = 0; i < c; i++)
{
_putchar((abs / mult) + 48);
abs = abs % mult;
mult = mult / 10;
}
}
