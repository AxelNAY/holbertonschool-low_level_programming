#include "main.h"
#include <stdio.h>
/**
* puts_half - print half of a string
*
* @str: pointer str
*/
void puts_half(char *str)
{
int len = 0;
int i = 0;
while (str[len])
len++;
for (i = len - 1; i >= len / 2; i--)
_putchar(str[i]);
_putchar('\n');
}
