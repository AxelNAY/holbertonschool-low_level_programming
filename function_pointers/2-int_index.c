#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array.
 * @size: size.
 * @cmp: pointer.
 * Return: result.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			res++;
	}
	
	if (res == 0)
		return (-1);
	return (res);
}
