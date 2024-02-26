#include "main.h"
#include <stdio.h>

/**
* print_line - print a line
*
* @n: number of times for _
*/

void print_line(int n)
{
if (n <= 0)
_putchar('\n');
else
{
int i = 0;
while (i < n)
{
_putchar(95);
i++;
}
_putchar('\n');
}
}
