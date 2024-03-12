#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - allocates memory using malloc.
* @b: value.
* Return: returns a pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == 0)
		return (NULL);
	return (s);
}
