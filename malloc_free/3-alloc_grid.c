#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width.
* @height: height.
* Return: pointer or NULL.
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	s = malloc(height * sizeof(int *));
	if (s == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == 0)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
