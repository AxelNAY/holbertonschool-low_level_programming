#include "main.h"

/**
 * set_bit - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number.
 * @m: the other number.
 * Return: the number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numb = (n & 1) ^ (m & 1);

	if (n == m)
		return (numb);

	return (numb + flip_bits(n >> 1, m >> 1));
}
