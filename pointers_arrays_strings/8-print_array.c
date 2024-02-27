#include "main.h"
#include <stdio.h>

/**
* print_array - Prints an inputted number of elements
*               of an array of integers.
*
* @a: The array of integers.
*
* @n: The number of elements to be printed.
*/

void print_array(int *a, int n)
{
int len = 0;
int i;
while (a[len])
len++;
for (i = 0; i < len; i++)
{
if (i == n)
{
_putchar(a[i]);
if (i < (len - 1))
{
_putchar(44);
_putchar(32);
}
}
}
_putchar('\n');
}
