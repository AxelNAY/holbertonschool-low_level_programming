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
	int i, l, w = 0, k = 0, len = 0, firstlet, lastlet;
	char **s, *word;

	if (str == NULL)
		return (NULL);
	while (str[len])
	{
		if (str[len] == ' ')
			k = 0;
		else if (k == 0)
		{
			k = 1;
			w++;
		}
		len++;
	}

	s = malloc(w + 1 * sizeof(char *));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (l)
			{
				lastlet = i;
				word = malloc(l + 1 * sizeof(char));
				if (word == NULL)
					return (NULL);
				for (; firstlet < lastlet; firstlet++)
					*word++ = str[firstlet];
				*word = '\0';
				s[k] = word - l;
				k++;
				l = 0;
			}
		}
		else if (l++ == 0)
			firstlet = i;
	}

	return (s);
}
