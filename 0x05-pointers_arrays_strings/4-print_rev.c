#include "main.h"

/**
 * print_rev - prints a string in reverse + nex line
 * @s: a string
 *
 */
void print_rev(char *s)
{
	int i;
	
	len = _strlen(s);
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar ('\n');
}
