#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - creates an array of integers.
* @min: minimum.
* @max: maximum.
* Return: returns a pointer.
*/

int *array_range(int min, int max)
{
	int *s;
	unsigned int i;

	if (min > max)
		return (NULL);
	s = malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		s[i] = min;
		min++;
	}

	return (s);
}
