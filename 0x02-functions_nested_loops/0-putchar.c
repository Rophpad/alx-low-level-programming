#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Prints the text _putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";
	int size = sizeof(text);

	write(1, text, size);
	_putchar('\n');
	return (0);
}
