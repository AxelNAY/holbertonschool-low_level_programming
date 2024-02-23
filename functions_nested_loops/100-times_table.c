#include <unistd.h>
#include "main.h"

/**
* print_times_table - display n table n time.
*
* @n: number for the table.
*
* Return: return the sum
*/

void print_times_table(int n)
{
if (n == 0)
{
_putchar(n + 48);
_putchar('\n');
}
else if ((n < 15) && (n > 0))
{
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
if ((i * j) > 99)
{
_putchar((i * j) / 100 + 48);
_putchar(((i * j) / 10) % 10 + 48);
_putchar((i * j) % 10 +  48);
}
else if ((i * j) > 9)
{
_putchar(32);
_putchar((i * j) / 10 + 48);
_putchar((i * j) % 10 + 48);
}
else
{
if (j > 0)
{
_putchar(32);
_putchar(32);
_putchar((i * j) + 48);
}
else
_putchar((i * j) + 48);
}
if (j < n)
{
_putchar(44);
_putchar(32);
}
}
_putchar('\n');
}
}
}
