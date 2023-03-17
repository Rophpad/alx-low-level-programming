#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Return: 0 (success)
 */
int main(void)
{
	int first = '0';
	int second = '0';

	for (second = '0'; second <= '9'; second++)
	{
		for (first = '0'; first <= '9'; first++)
		{
			if (!((first == second) || (second > first)))
			{
				putchar(second);
				putchar(first);
				if (!(first == '9' && second == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
