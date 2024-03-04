#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string.
* @s: string.
* @c: character.
* Return: pointer s.
*/

char *_strchr(char *s, char c)
{
unsigned int i;
int res = -1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c && res == -1)
res = i;
}
if (res != -1)
return (&s[res]);
return ('\0');
}
