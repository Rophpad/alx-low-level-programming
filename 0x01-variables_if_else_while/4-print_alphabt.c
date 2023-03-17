#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints alphabet in lowercase except 'q' and 'e'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		while (ch != 'e' && ch != 'q')
		{
			putchar(ch);
			break;
		}
	}
	putchar('\n');
	return (0);
}
