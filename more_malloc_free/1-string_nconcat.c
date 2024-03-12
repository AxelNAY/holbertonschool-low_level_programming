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
	unsigned int i;
	unsigned int len = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
		len++;
	
	s = malloc((len + 1) * sizeof(char));
	
	if (s == NULL)
		return (NULL);
	
	for (i = 0; s1[i]; i++)
		s[len++] = s1[i];
	
	for (i = 0; s2[i] && i < n; i++)
		s[len++] = s2[i];
	
	s[len] = '\0';
	
	return (s);
}
