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
while (*s++)
{
while (*accept++)
{
if (*s == *accept)
len++;
}
}
return (len);
}
