#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: number.
 * @index: index.
 * Return: 1 if success or -1 if fail.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
