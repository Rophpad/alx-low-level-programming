#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 */
void jack_bauer(void)
{
	char h;
	char min;

	for (h = '0'; h < '24'; h++)
	{
		if (h < '10')
		{
			_putchar('0');
			_putchar(h);
		}
		else
		{
			_putchar(h);
		}
		_putchar(':');
		for (min = '0'; min < '60'; min++)
		{
			if (min < '10')
			{
				_putchar('0');
				_putchar(min);
			}
			else
			{
				_putchar(min);
			}
			_putchar('\n');
		}
	}
}
