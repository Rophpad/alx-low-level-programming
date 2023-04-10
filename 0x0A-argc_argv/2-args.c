#include <stdio.h>

/**
 * main - Prints all arguments received
 * @argc: Number of arguments
 * @argv: Arguments received
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	while (argc != 0)
	{
		printf("%s\n", *argv++);
		argc = argc - 1;
	}
	return (0);
}
