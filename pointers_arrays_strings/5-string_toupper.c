#include "main.h"
#include <stdio.h>

/**
* string_toupper - changes all lowercase letters of a string to uppercase.
*
* @t: pointer t
*
* Return: result
*/

char *string_toupper(char *t)
{
int i;
for (i = 0; t[i] != '\0'; i++)
if (t[i] >= 97 && t[i] <= 122)
t[i] = t[i] - 32;
return (t);
}
