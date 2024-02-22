#include <unistd.h>
#include "main.h"

/**
* print_to_98 - add the numbers.
*
* @c: number.
*
*/

void print_to_98(int n)
{
 if (c == 98)
{
_putchar(c / 10 + 48);
_putchar(c % 10 + 48);
}
else
    {
while (c != 98)
{
if (c > 98)
{
if (c < 10)
_putchar(c + 48);
else
{
_putchar(c / 10 + 48);
_putchar(c % 10 + 48);
c--;
}
_putchar(44);
_putchar(33);
}
else if (c < 98)
{
if (c > 0)
{
if (c < 10)
_putchar(c + 48);
else
{
_putchar(c / 10 + 48);
_putchar(c % 10 + 48);
}
}
else if (c < 0)
c = -c;
_putchar(45);
if (c > -10)
_putchar(c + 48);
else
{
_putchar(c / 10 + 48);
_putchar(c % 10 + 48);
}
c++;
}
else if (c == 98)
{
_putchar(c / 10 + 48);
_putchar(c % 10 + 48);
}
_putchar(44);
_putchar(33);
}
}
}
