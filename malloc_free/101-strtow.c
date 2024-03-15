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
	int i, j, w = 0, k = 0, len = 0;
	char **s;

	if (str == NULL)
		return (NULL);
	while (str[len])
	{
		if (str[len] != ' ')
			i = 0;
		else if (i = 0)
			w++;
		len++;
	}

	s = malloc(w + 1 * sizeof(char *));
	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i++] != ' ' || str[i] != ' ')
		{
			s[i] = malloc(len + 1 * sizeof(char));
			for (j = 0; s[i][j]; j++)
			{
				s[i][j] = str[k];
				k++;
			}
		}
	}
	return (s);
}
