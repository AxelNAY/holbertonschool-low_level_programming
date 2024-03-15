#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * numb_word - find the number of words in a string
 * @s: string.
 * Return: numbers of words.
 */

int numb_word(char *s)
{
	int i, j = 0, w = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			j = 0;
		else if (j++ == 0)
			w++;
	}

	return (w);
}

/**
* strtow - splits a string into words.
* @str: string.
* Return: result.
*/

char **strtow(char *str)
{
	char **s, *letter;
	int i, w, k = 0, len = 0, c = 0, firstlet, lastlet;

	while (str[len])
		len++;
	w = numb_word(str);
	if (w == 0)
		return (NULL);

	s = malloc((w + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				lastlet = i;
				letter = malloc((c + 1) * sizeof(char));
				if (letter == NULL)
					return (NULL);
				while (firstlet < lastlet)
					*letter++ = str[firstlet++];
				*letter = '\0';
				s[k] = letter - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			firstlet = i;
	}
	s[k] = NULL;

	return (s);
}
