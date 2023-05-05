#include "main.h"

/**
 * set_bit - Sets the vzlue of a bit at a given index to 1
 * @n: is a number
 * @index: the given position for the bit
 *
 * Return: -1 if an error occurs
 *		1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
