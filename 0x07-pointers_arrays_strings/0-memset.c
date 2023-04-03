#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: a string of characters
 * @b: a single character
 * @n: positive integer
 *
 * Return: a pointer to the memory area s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
