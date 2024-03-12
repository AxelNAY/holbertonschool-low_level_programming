#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* string_nconcat - allocates memory using malloc.
* @s1: first string.
* @s2: second string.
* @n: first n value of s2.
* Return: returns a pointer to the allocated memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;
	char *s;

	if ((s1 == 0) || (s2 == 0))
	{
		s1 = "";
		s2 = "";
	}
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (len2 > n)
		len2 = n;
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
