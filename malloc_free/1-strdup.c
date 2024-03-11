#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: string
* Return: pointer.
*/

char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str++)
		len++;
	s = malloc(len * sizeof(char));
	if (s == 0)
		return (NULL);
	for (i = 0; i <= len - 1; i++)
		s[i] = str[i];
	return (s);
}
