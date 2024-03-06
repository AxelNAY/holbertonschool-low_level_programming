#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 */

int _strlen_recursion(char *s)
{
int len;
if (*s == '\0')
{
return (0);
}
else
len = 0;
while (*s++)
len++;
return (len + _strlen_recursion(s + 1));
}
