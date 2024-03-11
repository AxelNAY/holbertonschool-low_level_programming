#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: string
* Return: pointer.
*/

char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *s;

	if (str == 0)
		return (NULL);
	while (str[len] != '\0')
		len++;
	s = malloc(len * sizeof(char));
	if (s == 0)
		return (NULL);
	for (i = 0; i <= len - 1; i++)
		s[i] = str[i];
	s[len] = '\0';
	return (s);
}
