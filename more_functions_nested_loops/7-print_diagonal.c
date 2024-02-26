#include "main.h"
#include <stdio.h>

/**
* print_diagonal - print a diagonal
*
* @n: number of times for \
*/

void print_diagonal(int n)
{
if (n <= 0)
_putchar('\n');
else
{
int i = 0;
while (i < n)
{
int esp = 0;
while (esp < i)
{
_putchar(32);
esp++;
}
_putchar(92);
_putchar('\n');
i++;
}
}
}
