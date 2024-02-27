#include "main.h"
#include <stdio.h>

/**
* puts2 - print a character from a string follow
* by a new line.
*
* @str: pointer str
*/

void puts2(char *str)
{
while (*str)
{
_putchar(*str++);
_putchar('\n');
}
}
