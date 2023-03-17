#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the alphabet in lowercase using 
 * the putchar function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++ )
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
