#include "main.h"

/**
 * print - Prints number with one or multiple digit
 * using putchar
 * @value: is a integer
 *
 */
void print(int value)
{
	do{
		print(value / 10);
		_putchar((value % 10) + '0');
	}while (value != 0);
}

/**
 * times_table - Prints the 9 times table
 *
 */
void times_table(void)
{
	int i, j, k, result;

	k = 0;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		result = 0;
		for (j = 0; j < 10; j++)
		{
			if (j != 9)
			{
				print(result);
				_putchar(',');
				_putchar(' ');
				result = result + k;
			}
			else
			{
				print(result);
				_putchar('\n');
			}
		}
		k = k + 1;
	}
}
