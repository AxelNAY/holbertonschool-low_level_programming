#include "main.h"

/**
 * _strstr - searches string for a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: substring if find
 */

char *_strstr(char *haystack, char *needle)
{
int i;

while (*haystack)
{
for (i = 0; *(needle + i); i++)
if (*(needle + i) != *(haystack + i))
break;
if (!*(needle + i))
return (haystack);
haystack++;
}
return ('\0');
}
