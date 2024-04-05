#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number.
 * @index: index
 * Return: the value of a bit at a given index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);

	return (-1);
}
