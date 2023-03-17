#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all sinngle digit numbers of base 10
 * starting from 0 without using any variable of type char
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
