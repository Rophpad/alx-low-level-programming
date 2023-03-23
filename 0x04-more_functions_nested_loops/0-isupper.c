#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: is an integer (ascii value of a char)
 *
 * Return: bin (1 or 0)
 */
int _isupper(int c)
{
	int bin;

	if (c >= 65 && c <= 90)
		bin = 1;
	else
		bin = 0;
	return (bin);
}
