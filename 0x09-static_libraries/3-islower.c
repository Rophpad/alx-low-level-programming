#include "main.h"

/**
 * _islower - is lower
 * @c: integer
 *
 * Return: integer
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
