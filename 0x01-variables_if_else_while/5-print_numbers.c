#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all sigle digit numbers of base 10
 * starting from 0
 *
 *Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	do {
		printf("%d", i);
		i++;
	} while (i < 10);
	printf("\n");
	return (0);
}
