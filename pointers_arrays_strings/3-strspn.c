#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: string.
* @accept: substring.
* Return: pointer s.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
len++;
}
}
else
return (len);
}
return (len);
}
