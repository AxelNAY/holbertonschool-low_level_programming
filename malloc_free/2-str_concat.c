#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - concatenates two strings.
* @s1: string 1.
* @s2: string 2.
* Return: pointer or NULL.
*/

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;
	int slen = 0;
	char *s;

	if ((s1 == 0) || (s2 == 0))
		return (NULL);
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	slen = len1 + len2;
	s = malloc((slen + 1) * sizeof(char));
	if (s == 0)
		return (NULL);
	for (i = 0; i <= len1 - 1; i++)
		s[i] = s1[i];
	j = i;
	for (i = 0; i <= len2 - 1; i++)
		s[j] = s2[i];
	s[slen] = '\0';
	return (s);
}
