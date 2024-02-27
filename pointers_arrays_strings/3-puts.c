#include "main.h"
#include <stdio.h>

/**
* _puts - print a string follow
* by a new line.
*
* @str: pointer str
*/

void _puts(char *str)
{
_putchar(*str);
while (*str++)
_putchar(*str);
_putchar('\n');
}
