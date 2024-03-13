#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* strtow - splits a string into words.
* @str: string.
* Return: result.
*/

char **strtow(char *str)
{
	int i, j, k = 0, len = 0;
	char **s;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;

	s = malloc(len + 1 * sizeof(char *));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
			s[k++] = '\n';
	}

	return (s);
}
