#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* argstostr - concatenates all the arguments of your program.
* @ac: number of arrays.
* @av: double pointer.
* Return: result or NULL.
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len = len + ac;

	s = malloc(len + 1 * sizeof(char));
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
