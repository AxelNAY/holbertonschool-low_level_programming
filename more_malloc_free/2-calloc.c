#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _calloc - allocates memory for an array, using malloc.
* @nmemb: number of elements.
* @size: size.
* Return: returns a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;

	return (s);
}
