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
int len = 0;
int i = 0;
while (s[len])
len++;
for (i = len - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
