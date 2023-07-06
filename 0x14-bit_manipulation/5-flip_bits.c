#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * flipped to get from one number to another
 * @n: the number
 * @m; the number to flip n to
 *
 * Return: The necessary number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int to = n ^ m, bits = 0;

	while (to > 0)
	{
		bits += (to & 1);
		to >>= 1;
	}
	return (bits);
}
