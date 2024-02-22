#include <unistd.h>
#include "main.h"

/**
* print_last_digit - Last digit.
*
* @c: Character to analyse.
*
* Return: Always a value.
*/

int print_last_digit(int c)
{
int i = 0;
int n = 48;
int l = c % 10;
if (i != l)
{
while (i != l)
{
i++;
n++;
if (i == l)
_putchar(n);
}
}
else
_putchar(n);
return (l);
}
