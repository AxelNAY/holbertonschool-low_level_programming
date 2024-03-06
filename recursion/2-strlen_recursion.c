#include "main.h"

/**
 *  - returns the length of a string.
 * @s: string.
 */

int _strlen_recursion(char *s)
{
int len = 0;
if (*s == '\0')
{
return (len);
}
while (*s++)
len++;
_strlen_recursion(s + 1);
}
