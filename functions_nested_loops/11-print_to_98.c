#include <unistd.h>
#include "main.h"

/**
* print_to_98 - add the numbers.
*
* @n: number.
*
*/

void print_to_98(int n)
{
if (n == 98)
{
_putchar(n / 10 + 48);
_putchar(n % 10 + 48);
_putchar('\n');
}
else
{
while (n != 98)
{
if (n > 98)
{
if (n < 10)
_putchar(n + 48);
_putchar(32);
else
{
_putchar(n / 10 + 48);
_putchar(n % 10 + 48);
n--;
}
_putchar(44);
_putchar(32);
}
else if (n < 98)
{
if (n > 0)
{
if (n < 10)
_putchar(n + 48);
else
{
_putchar(n / 10 + 48);
_putchar(n % 10 + 48);
}
}
else if (n < 0)
n = -n;
_putchar(45);
if (n > -10)
_putchar(n + 48);
_putchar(32);
else
{
_putchar(n / 10 + 48);
_putchar(n % 10 + 48);
}
n++;
_putchar(44);
_putchar(32);
}
else if (n == 98)
{
_putchar(n / 10 + 48);
_putchar(n % 10 + 48);
_putchar('\n');
}
}
}
}
