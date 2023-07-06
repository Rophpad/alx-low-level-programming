#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given position
 * @n: the number
 * @index: the position of the bit to clear
 *
 * Return: -1 when failure and 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
