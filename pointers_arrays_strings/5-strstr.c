#include "main.h"

/**
* _strstr - locates a substring.
* @haystack: string.
* @needle: substring.
* Return: pointer s.
*/

char *_strstr(char *haystack, char *needle)
{
int i, j = 0;
for (j = 0; needle[j] != '\0'; j++)
{
;
}
for (; *haystack; haystack++)
{
while (needle[i] != '\0' && haystack[i] == needle[i])
i++;
if (needle[i] == '\0')
return (haystack);
}
return ('\0');
}
