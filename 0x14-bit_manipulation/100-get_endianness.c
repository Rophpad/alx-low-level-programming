#include "main.h"

/**
 * get_endianness - Check the endianness
 *
 * Return: 0 if big-endian
 * 1 if little-endian
 */
int get_endianness(void)
{
	int one = 1, value = 0;
	char *endian = (char *)&one;

	value = (*endian == 1) ? 1 : 0;
	return (value);
}
