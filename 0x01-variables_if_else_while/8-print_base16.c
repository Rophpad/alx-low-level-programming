#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Seccess)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
