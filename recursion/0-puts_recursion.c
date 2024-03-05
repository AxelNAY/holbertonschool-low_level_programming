#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string.
 */

void _puts_recursion(char *s)
{
int i;
for (i = 0; s[i]; i++)
putchar(s[i]);
putchar('\n');  
}
