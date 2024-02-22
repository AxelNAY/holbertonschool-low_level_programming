#include <unistd.h>
#include "main.h"

/**
* times_table - Display the 9 tables.
*/

void times_table(void)
{
int i = 0;
while (i < 10)
{
int j = 0;
while (j < 10)
{
if ((i * j) < 10)
_putchar((i * j) + 48);
else
{
_putchar((i * j) / 10 + 48);
_putchar((i * j) % 10 + 48);
}
if (j <= 9)
{
_putchar(44);
_putchar(32);
if ((i * j) < 10)
_putchar(32);
}
j++;
}
_putchar('\n');
i++;
}
}
