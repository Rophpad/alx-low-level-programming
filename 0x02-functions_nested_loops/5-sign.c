#include "main.h"

/**
 * print_sign - Check the sign of an integer
 * @n: is the integer
 *
 * Return: 1 if it's a positive number, 0 if the number is zero
 * -1 for negative number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			_putchar(',');
			_putchar(' ');
			return (-1);
		}
		else
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			return (0);
		}
	}
}
