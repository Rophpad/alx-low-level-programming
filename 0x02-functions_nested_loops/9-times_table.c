#include "main.h"

/**
 * print - Prints number with one or multiple digit
 * using putchar 
 * @value is a integer
 *
 */
void print(int value)
{
	if (value != 0)
	{
		print(value / 10);
		_putchar((value % 10) + '0');
	}
	else
		_putchar('0');
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
				result = result + k;
			}
			else
			{
				print(result);
			}
		}
		k = k + 1;
	}
}
