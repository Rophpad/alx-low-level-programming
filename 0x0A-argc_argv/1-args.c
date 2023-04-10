#include <stdio.h>

/**
 * main - Prints the number of arguments received
 * @argc: Arg count
 * @argv: Array of arg strings
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
