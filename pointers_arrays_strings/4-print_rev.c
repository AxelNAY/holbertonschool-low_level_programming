#include "main.h"
#include <stdio.h>

/**
* print_rev - print a string in reverse
* follow by a new line.
*
* @s: pointer s
*/

void print_rev(char *s)
{
while (*s--)
_putchar(*s);
_putchar('\n');
}
