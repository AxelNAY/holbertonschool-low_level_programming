#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array.
 * @size: size.
 * @cmp: pointer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			res++;
	}

	return (res);
}
