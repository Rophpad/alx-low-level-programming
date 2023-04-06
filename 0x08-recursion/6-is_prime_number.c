#include "main.h"

/**
 * iam_prime - Check if a number divisibility
 * @n: the number
 * @i: incremeted int acting as operator starting from 2 to n
 *
 * Return: 1 or 0
 *
 */
int iam_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (iam_prime(n, i + 1));
}

/**
 * is_prime_number - return 1 if the input integer is a prime
 * number, otherwise return 0
 * @n: the input integer to check
 *
 * Return: 1 or 0
 *
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n < 0)
		return (0);
	return (iam_prime(n, 2));
}
