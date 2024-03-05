#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: string.
* @accept: substring.
* Return: pointer s.
*/

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (accept);
}
}
}
return ('\0');
}
