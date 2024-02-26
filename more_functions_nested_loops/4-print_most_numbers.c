#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - display numbers
*/

void print_most_numbers(void)
{
int c = 48;
while (c < 58)
{
if ((c != 50) && (c != 52))
_putchar(c);
c++;
}
_putchar('\n');
}
