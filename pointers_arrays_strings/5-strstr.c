#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string to search in
 * @needle: string to look for
 * Return: return a pointer
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j;

for (j = 0; needle[j] != '\0'; j++)
{
;
}
while (*haystack)
{
	if (j > 0 && haystack[j - 1] == '\0')
	{
		return ('\0');
	}
	while (needle[i] != '\0' && haystack[i] == needle[i])
	{
		i++;
	}
	if (needle[i] == '\0')
	{
		return (haystack);
	}
	haystack++;
}
return ('\0');
}
