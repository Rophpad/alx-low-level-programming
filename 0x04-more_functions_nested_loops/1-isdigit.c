#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: is an integer (ascii value of number entered by user)
 *
 * Return: bin (1 or 0)
 */
int _isdigit(int c)
{
	int bin;

	if (c >= 48 && c <= 57)
		bin = 1;
	else
		bin = 0;
	return (bin);
}
