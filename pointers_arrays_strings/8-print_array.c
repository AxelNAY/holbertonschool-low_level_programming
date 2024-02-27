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
for (int i = 0; i < n; i++)
{
_putchar(a[i]);
if (i < (n - 1))
{
_putchar(44);
_putchar(32);
}
}
_putchar('\n');
}
