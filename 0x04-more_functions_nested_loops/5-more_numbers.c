#include "main.h"

/**
 * print - Prints numbers greater than 9
 * @n: interger > 9
 *
 */
void print(int n)
{
	if (n != 0)
	{
		print(n / 10);
		_putchar((n % 10) + '0');
	}
}

/**
 * display - Prints all type of numbers
 * @n: interger to print
 *
 */
void display(int n)
{
	if (n <= 9)
		_putchar(n + '0');
	else
		print(n);
}

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
			display(j);
		_putchar('\n');
	}
}
