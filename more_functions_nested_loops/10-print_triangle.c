#include "main.h"
#include <stdio.h>

/**
* print_triangle - print a square
*
* @size: number of times for triangle
*/

void print_triange(int size)
{
if (size <= 0)
_putchar('\n');
else
{
int i = 0;
while (i < size)
{
int j = 0;
while (j < size)
{
if (j < (size - i))
_putchar(32);
else
_putchar(35);
j++;
}
_putchar('\n');
i++;
}
}
}
