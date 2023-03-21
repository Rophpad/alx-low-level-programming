#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @number: is the number
 *
 * Return: the result stored in lastdigit
 */
int print_last_digit(int number)
{
	int lastdigit = number % 10;

	if (lastdigit < 0)
		lastdigit = -1 * lastdigit;
	_putchar(lastdigit + 48);
	return (lastdigit);
}
