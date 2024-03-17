#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer.
 * @old_size: old size of the pointer.
 * @new_size: new size of the pointer.
 * Return: the new pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *old_ptr;
	unsigned int i;

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);

	old_ptr = ptr;
	if (s == NULL)
		return (NULL);

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			s[i] = old_ptr[i];
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			s[i] = old_ptr[i];
	}

	free(ptr);
	return (s);
}
