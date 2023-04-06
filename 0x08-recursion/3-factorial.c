#include "main.h"

/**
 * factorial - Displays the factorial of a given number
 * @n: the number
 *
 * Return: 0, -1 or factorial of n dependly of the given number
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
