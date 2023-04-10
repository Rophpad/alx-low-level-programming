#include <stdio.h>

/**
 * main - Prints the name of the executable file
 * @argc: Argument count
 * @argv: Agument vector
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
