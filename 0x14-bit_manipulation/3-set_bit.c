#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: the number
 * @index: the given position for the bit
 *
 * Return: -1 for an error and 1 when success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
