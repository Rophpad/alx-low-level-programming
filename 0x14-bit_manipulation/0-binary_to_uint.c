#include "main.h"

/**
 * _strlen - Gets a string length
 * @b: the str
 *
 * Return: an unsignet int
 */
unsigned int _strlen(const char *b)
{
	unsigned int len = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		len++;
		b++;
	}
	return (len);
}

/**
 * binary_to_uint - Converts a ninary number to
 * an unsigned int
 * @b: A string of 0 and 1 chars
 *
 * Return: 0 or the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, pow, exp, i;

	if (b == NULL)
		return (0);
	pow = _strlen(b) - 1;
	num = 0;
	while (*b != '\0')
	{
		i = 0;
		exp = 1;
		if (*b != '0' && *b != '1')
			return (0);
		if (pow != 0)
		{
			while (i < pow)
			{
				exp = exp * 2;
				i++;
			}
			pow = pow - 1;
		}
		num = num + ((*b - '0') * exp);
		b++;
	}
	return (num);
}
