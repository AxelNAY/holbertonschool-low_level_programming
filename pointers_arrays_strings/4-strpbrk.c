#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: string.
* @accept: substring.
* Return: pointer s.
*/

char *_strpbrk(char *s, char *accept)
{
int j;
for (; *s; s++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
return (s);
}
}
return ('\0');
}
