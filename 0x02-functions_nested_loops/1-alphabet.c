#include "main.h"

/**
 * print_alphabet - Prints one by one all the alphabetic
 * letter in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter ++)
	{
		_putchar(letter);
	}
		_putchar('\n');
}
