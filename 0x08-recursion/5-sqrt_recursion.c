#include "main.h"

/**
 * getroot - help for checking
 * @i: integer
 * @n: integer
 *
 * Return: an int
 *
 */
int getroot(int i, int n)
{
	int var;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		var = getroot(i + 1, n);
		return (var + 1);
	}
	return (0);
}

/**
 * _sqrt_recursion - return the natural square of a number
 * @n: the number of tupe int
 *
 * Return: an int
 *
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (getroot(i, n) == n && n != 1)
		return (-1);
	return (getroot(i, n));
}
