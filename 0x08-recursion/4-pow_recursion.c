#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Displays the value of x raised to the
 * power of y
 * @x: the number (integer)
 * @y: the exponent (integer)
 *
 * Return: -1, 1, x^y
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
