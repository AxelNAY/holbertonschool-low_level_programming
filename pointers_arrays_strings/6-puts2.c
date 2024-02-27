#include "main.h"
#include <stdio.h>

/**
* puts2 - Prints one char out of two of a string
* follow by a new line.
*
* @str: pointer str
*/

void puts2(char *str)
{
while (*str)
{
if ((*str % 2) == 0)
_putchar(*str++);
}
_putchar('\n');
}
